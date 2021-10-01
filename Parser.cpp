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

void Parser::ParseProgram(std::vector<Token*> parseTokens) {
    // COPY VECTOR OVER
    for(int i = 0; i < parseTokens.size(); i++) {
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
    } catch (Token* error) {
        std::cout << "Failure!" << std::endl;
        std::cout << "  ";
        error->toString();
    }
}

void Parser::Parse() {

    // BEGIN CHECKING SYNTAX
    //TokenType tokenToMatch;

    // datalogProgram -> SCHEMES COLON scheme schemeList FACTS COLON factList
    //                   RULES COLON ruleList QUERIES COLON query queryList EOF

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

    // EOF
//    if(parseVector.at(index)->getType() == TokenType::EOF_TYPE) {
//        parseResult = true;
//        return;
//    } else {
//        parseResult = false;
//        throw parseVector.at(index);
//    }
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
    match(TokenType::ID);
    match(TokenType::LEFT_PAREN);
    match(TokenType::ID);
    parseIDList();
    match(TokenType::RIGHT_PAREN);
}

void Parser::parseFact() {
    match(TokenType::ID);
    match(TokenType::LEFT_PAREN);
    match(TokenType::STRING);

    parseStringList();

    match(TokenType::RIGHT_PAREN);
    match(TokenType::PERIOD);
}

void Parser::parseRule() {

    parseHeadPredicate();

    match(TokenType::COLON_DASH);

    parsePredicate();
    parsePredicateList();

    match(TokenType::PERIOD);
}

void Parser::parseQuery() {
    parsePredicate();
    match(TokenType::Q_MARK);
}

void Parser::parseHeadPredicate() {
    match(TokenType::ID);
    match(TokenType::LEFT_PAREN);
    match(TokenType::ID);

    parseIDList();

    match(TokenType::RIGHT_PAREN);
}

void Parser::parsePredicate() {
    match(TokenType::ID);
    match(TokenType::LEFT_PAREN);

    parseParameter();
    parseParameterList();

    match(TokenType::RIGHT_PAREN);
}

void Parser::parsePredicateList() {
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        match(TokenType::COMMA);
        parsePredicate();
        parsePredicateList();
    }
}

void Parser::parseParameterList() {
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        match(TokenType::COMMA);
        parseParameter();
        parseParameterList();
    }
}

void Parser::parseStringList() {
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        match(TokenType::COMMA);
        match(TokenType::STRING);
        parseStringList();
    }
}

void Parser::parseIDList() {
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        match(TokenType::COMMA);
        match(TokenType::ID);
        parseIDList();
    }
}

void Parser::parseParameter() {
    // STRING | ID
    if(parseVector.at(index)->getType() == TokenType::STRING) {
        match(TokenType::STRING);
    }
    if(parseVector.at(index)->getType() == TokenType::ID) {
        match(TokenType::ID);
    }
}




