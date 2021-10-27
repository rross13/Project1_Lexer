#include "Parser.h"
#include <iostream>

Parser::Parser() {
    index = 0;
    CreateParser();
}

Parser::~Parser() {

}

void Parser::CreateParser() {
    parseVector.clear();
}

void Parser::match(TokenType type) {
    if(parseVector.at(index)->getType() == type) {
        index++;
    } else {
        throw parseVector.at(index);
    }
}

//std::string Parser::nameToString(TokenType name) {
//    std::string newName;
//    TokenType token;
//
//    token = parseVector.at(index)->getType();
//    newName = parseVector.at(index)->tokenToString(token);
//
//    return newName;
//}

void Parser::ParseProgram(std::vector<Token*> parseTokens) {
    // COPY VECTOR OVER
    for(unsigned int i = 0; i < parseTokens.size(); i++) {
        if(parseTokens.at(i)->getType() != TokenType::COMMENT) {
            parseVector.push_back(parseTokens.at(i));
        }
//        else {
//            std::cout << "COMMENT found, token not added" << std::endl;
//        }
    }

    try{
        Parse();
        std::cout << "Success!" << std::endl;
        datalogProgram.toString();
    } catch (Token* error) {
        std::cout << "Failure!" << std::endl;
        std::cout << "  ";
        error->toString();
    }
}

void Parser::Parse() {

    match(TokenType::SCHEMES);
    match(TokenType::COLON);

    parseScheme();
    parseSchemeList();

    match(TokenType::FACTS);
    match(TokenType::COLON);

    parseFactList();

    match(TokenType::RULES);
    match(TokenType::COLON);

    parseRuleList();

    match(TokenType::QUERIES);
    match(TokenType::COLON);

    parseQuery();
    parseQueryList();

    match(TokenType::EOF_TYPE);
}

void Parser::parseSchemeList() {
    // scheme
    if(parseVector.at(index)->getType() == TokenType::ID) {
        parseScheme();
        parseSchemeList();
    }
}

void Parser::parseFactList() {
    if(parseVector.at(index)->getType() == TokenType::ID) {
        parseFact();
        parseFactList();
    }
}

void Parser::parseRuleList() {
    if(parseVector.at(index)->getType() == TokenType::ID) {
        parseRule();
        parseRuleList();
    }
}

void Parser::parseQueryList() {
    if(parseVector.at(index)->getType() == TokenType::ID) {
        parseQuery();
        parseQueryList();
    }
}

void Parser::parseScheme() {
    Predicate scheme;
    Parameter schemeID;

    // set name to token description
    //FIXME: ASSIGN NAME IN CONSTRUCTOR OF PREDICATE
    //FIXME: CREATE PARSER VARIABLE OF PARAMETER VECTOR, PASS TO CONSTRUCTORS
    scheme.name = parseVector.at(index)->getDescription();

    match(TokenType::ID);
    match(TokenType::LEFT_PAREN);

    // Adding parameters to predicate vector
    schemeID.name = parseVector.at(index)->getDescription();
    scheme.parameterList.push_back(schemeID);

    match(TokenType::ID);

    // send vector of parameters in predicate to parseIDList
    parseIDList(scheme);

    match(TokenType::RIGHT_PAREN);

    // adding to vector in datalogProgram
    datalogProgram.schemesVector.push_back(scheme);
}

void Parser::parseFact() {
    Predicate fact;
    Parameter factID;

    fact.name = parseVector.at(index)->getDescription();

    match(TokenType::ID);
    match(TokenType::LEFT_PAREN);

    // Adding parameters to predicate vector
    factID.name = parseVector.at(index)->getDescription();
    //factID.isID = true;
    fact.parameterList.push_back(factID);
    datalogProgram.domainSet.insert(parseVector.at(index)->getDescription());

    match(TokenType::STRING);

    // send vector of parameters in predicate to parseIDList
    parseStringList(fact);

    match(TokenType::RIGHT_PAREN);
    match(TokenType::PERIOD);

    // adding to vector in datalogProgram
    datalogProgram.factsVector.push_back(fact);
}

void Parser::parseRule() {
    Rule newRule;

    parseHeadPredicate(newRule);

    match(TokenType::COLON_DASH);

    Predicate addToRule;
    //FIXME: NOT SURE IF THIS WORKS
    //newRule.predicateVector.push_back(addToRule);

    parsePredicate(addToRule);
    newRule.predicateVector.push_back(addToRule);
    parsePredicateList(newRule.predicateVector);


    match(TokenType::PERIOD);

    //newRule.predicateVector.push_back(addToRule);

    datalogProgram.rulesVector.push_back(newRule);
}

void Parser::parseQuery() {
    Predicate query;

    parsePredicate(query);
    match(TokenType::Q_MARK);

    // adding to vector in datalogProgram
    datalogProgram.queriesVector.push_back(query);
}

Rule Parser::parseHeadPredicate(Rule &newRule) {
    Parameter ruleID;

    newRule.headPredicate.name = parseVector.at(index)->getDescription();

    match(TokenType::ID);
    match(TokenType::LEFT_PAREN);

    ruleID.name = parseVector.at(index)->getDescription();
    newRule.headPredicate.parameterList.push_back(ruleID);

    match(TokenType::ID);

    parseIDList(newRule.headPredicate);

    match(TokenType::RIGHT_PAREN);

    return newRule;
}

Predicate Parser::parsePredicate(Predicate &addVector) {
    addVector.name = parseVector.at(index)->getDescription();

    match(TokenType::ID);
    match(TokenType::LEFT_PAREN);

    parseParameter(addVector);
    parseParameterList(addVector);

    match(TokenType::RIGHT_PAREN);

    return addVector;
}

vector<Predicate> Parser::parsePredicateList(vector<Predicate> &addVector) {
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        match(TokenType::COMMA);
        Predicate newPredicate;
        addVector.push_back(parsePredicate(newPredicate));
        parsePredicateList(addVector);
    }
    return addVector;
}

Predicate Parser::parseParameterList(Predicate &addVector) {
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        Parameter addParameter;

        match(TokenType::COMMA);

        addParameter.name = parseVector.at(index)->getDescription();
        //addVector.parameterList.push_back(addParameter);

        parseParameter(addVector);
        parseParameterList(addVector);
    }
    return addVector;
}

Predicate Parser::parseStringList(Predicate &addVector) {
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        Parameter addString;

        match(TokenType::COMMA);

        addString.name = parseVector.at(index)->getDescription();
        addVector.parameterList.push_back(addString);
        datalogProgram.domainSet.insert(parseVector.at(index)->getDescription());

        match(TokenType::STRING);

        parseStringList(addVector);
    }
    return addVector;
}

Predicate Parser::parseIDList(Predicate &addVector) {
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        Parameter addID;

        match(TokenType::COMMA);

        addID.name = parseVector.at(index)->getDescription();
        addVector.parameterList.push_back(addID);

        match(TokenType::ID);

        parseIDList(addVector);
    }
    return addVector;
}

Predicate Parser::parseParameter(Predicate &addVector) {
    Parameter queryID;

    queryID.name = parseVector.at(index)->getDescription();
    addVector.parameterList.push_back(queryID);

    // STRING | ID
    if(parseVector.at(index)->getType() == TokenType::STRING) {
        match(TokenType::STRING);
    }
    if(parseVector.at(index)->getType() == TokenType::ID) {
        match(TokenType::ID);
    }

    return addVector;
}




