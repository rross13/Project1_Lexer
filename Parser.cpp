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

void Parser::Parse(std::vector<Token*> parseTokens) {
    // COPY VECTOR OVER
    for(int i = 0; i < parseTokens.size(); i++) {
        parseVector.push_back(parseTokens.at(i));
        //std::cout << "parseVector vector at " << i << " = " << parseVector.at(i) << std::endl;
    }

    // BEGIN CHECKING SYNTAX
    //TokenType tokenToMatch;

    // datalogProgram -> SCHEMES COLON scheme schemeList FACTS COLON factList
    //                   RULES COLON ruleList QUERIES COLON query queryList EOF

    // SCHEMES
    if(parseVector.at(index)->getType() == TokenType::SCHEMES) {
        std::cout << "SCHEMES found" << std::endl;
        index++;
    } else {
        throw "Error found in Schemes";
    }

    // COLON
    if(parseVector.at(index)->getType() == TokenType::COLON) {
        std::cout << "COLON found" << std::endl;
        index++;
    } else {
        throw "Error found in COLON";
    }

    // scheme
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering scheme---" << std::endl;
        parseScheme();
    } else {
        throw "Error found in scheme";
    }

    // schemeList
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering schemeList" << std::endl;
        parseSchemeList();
    } else {
        throw "Error found in schemeList";
    }

    // FACTS
    if(parseVector.at(index)->getType() == TokenType::FACTS) {
        std::cout << "FACTS found" << std::endl;
        index++;
    } else {
        throw "Error found in FACTS";
    }

    // COLON
    if(parseVector.at(index)->getType() == TokenType::COLON) {
        std::cout << "COLON found" << std::endl;
        index++;
    } else {
        throw "Error found in COLON";
    }

    // factList
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering factList---" << std::endl;
        parseFactList();
    } else {
        throw "Error found in factList";
    }

    // RULES
    if(parseVector.at(index)->getType() == TokenType::RULES) {
        std::cout << "RULES found" << std::endl;
        index++;
    } else {
        throw "Error found in RULES";
    }

    // COLON
    if(parseVector.at(index)->getType() == TokenType::COLON) {
        std::cout << "COLON found" << std::endl;
        index++;
    } else {
        throw "Error found in COLON";
    }

    // ruleList
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---ruleList---" << std::endl;
        parseRuleList();
    } else {
        throw "Error found in ruleList";
    }

    // QUERIES
    if(parseVector.at(index)->getType() == TokenType::QUERIES) {
        std::cout << "QUERIES found" << std::endl;
        index++;
    } else {
        throw "Error found in QUERIES";
    }

    // COLON
    if(parseVector.at(index)->getType() == TokenType::COLON) {
        std::cout << "COLON found" << std::endl;
        index++;
    } else {
        throw "Error found in COLON";
    }

    // query
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering query---" << std::endl;
        parseQuery();
    } else {
        throw "Error found in query call";
    }

    // queryList
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering queryList---" << std::endl;
        parseQueryList();
    } else if(parseVector.at(index)->getType() == TokenType::EOF_TYPE) {
        std::cout << "Success!" << std::endl;
        return;
    } else {
        std::cout << "Failure!" << std::endl;
        throw "Error found in queryList call";
    }

    // EOF
    if(parseVector.at(index)->getType() == TokenType::EOF_TYPE) {
        std::cout << "Success!" << std::endl;
        return;
    } else {
        std::cout << "Failure!" << std::endl;
        throw "Error found in queryList call";
    }
}

void Parser::parseSchemeList() {
    // scheme
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering scheme---" << std::endl;
        parseScheme();
    } else {
        throw "Error found in schemeList - scheme";
    }

    // schemeList recursive
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering schemeList" << std::endl;
        parseSchemeList();
    } else if(parseVector.at(index)->getType() == TokenType::FACTS) {
        return;
    } else {
        throw "Error found in schemeList";
    }
}

void Parser::parseFactList() {
    // fact
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering fact---" << std::endl;
        parseFact();
    } else {
        throw "Error found in factList - ID";
    }

    // ID
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering factList---" << std::endl;
        parseFactList();
    } else if(parseVector.at(index)->getType() == TokenType::RULES) {
        std::cout << "Leaving factlist recursive call" << std::endl;
        return;
    }

    else {
        throw "Error found in factList - recursive call";
    }
}

void Parser::parseRuleList() {
    // rule
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering rule---" << std::endl;
        parseRule();
    } else {
        throw "Error found in ruleList - rule";
    }

    // ruleList recursive
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering ruleList---" << std::endl;
        parseRuleList();
    } else if(parseVector.at(index)->getType() == TokenType::QUERIES) {
        std::cout << "---LAMBDA---" << std::endl;
        return;
    } else {
        throw "Error found in ruleList recursive";
    }
}

void Parser::parseQueryList() {
    // query call
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering query---" << std::endl;
        parseQuery();
    } else {
        throw "Error found in queryList - query call";
    }

    // queryList recursive
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering queryList---" << std::endl;
        parseQueryList();
    } else if(parseVector.at(index)->getType() == TokenType::EOF_TYPE) {
        std::cout << "---LAMBDA---" << std::endl;
        return;
    } else {
        throw "Error found in queryList recursive call";
    }
}

void Parser::parseScheme() {
    // ID
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "ID found in Scheme" << std::endl;
        index++;
    } else {
        throw "Error found in Scheme - ID";
    }

    // LEFT_PAREN
    if(parseVector.at(index)->getType() == TokenType::LEFT_PAREN) {
        std::cout << "LEFT_PAREN found in Scheme" << std::endl;
        index++;
    } else {
        throw "Error found in Scheme - LEFT_PAREN";
    }

    // ID
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "ID found in Scheme" << std::endl;
        index++;
    } else {
        throw "Error found in Scheme - ID";
    }

    // idList check
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "---Entering idList---" << std::endl;
        parseIDList();
    } else {
        throw "Error found in Scheme - idList";
    }

    // RIGHT_PAREN
    if(parseVector.at(index)->getType() == TokenType::RIGHT_PAREN) {
        std::cout << "RIGHT_PAREN found in Scheme" << std::endl;
        index++;
    } else {
        throw "Error found in Scheme - RIGHT_PAREN";
    }
}

void Parser::parseFact() {
    // ID
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "ID found in fact" << std::endl;
        index++;
    } else {
        throw "Error found in fact - ID";
    }

    // LEFT_PAREN
    if(parseVector.at(index)->getType() == TokenType::LEFT_PAREN) {
        std::cout << "LEFT_PAREN found in fact" << std::endl;
        index++;
    } else {
        throw "Error found in fact - LEFT_PAREN";
    }

    // STRING
    if(parseVector.at(index)->getType() == TokenType::STRING) {
        std::cout << "STRING found in fact" << std::endl;
        index++;
    } else {
        throw "Error found in fact - STRING";
    }

    // stringList
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "---Entering stringList---" << std::endl;
        parseStringList();
    } else {
        throw "Error found in fact - stringList";
    }

    // RIGHT_PAREN
    if(parseVector.at(index)->getType() == TokenType::RIGHT_PAREN) {
        std::cout << "RIGHT_PAREN found in fact" << std::endl;
        index++;
    } else {
        throw "Error found in fact - RIGHT_PAREN";
    }

    // PERIOD
    if(parseVector.at(index)->getType() == TokenType::PERIOD) {
        std::cout << "PERIOD found in fact" << std::endl;
        index++;
    } else {
        throw "Error found in fact - RIGHT_PAREN";
    }
}

void Parser::parseRule() {
    // headPredicate
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering headPredicate---" << std::endl;
        parseHeadPredicate();
    } else {
        throw "Error found in rule - headPredicate";
    }

    // COLON_DASH
    if(parseVector.at(index)->getType() == TokenType::COLON_DASH) {
        std::cout << "COLON_DASH found in rule" << std::endl;
        index++;
    } else {
        throw "Error found in rule - COLON_DASH";
    }

    // predicate
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering predicate---" << std::endl;
        parsePredicate();
    } else {
        throw "Error found in rule - headPredicate";
    }

    // predicateList
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "---Entering predicateList---" << std::endl;
        parsePredicateList();
    } else {
        throw "Error found in rule - predicateList";
    }

    // PERIOD
    if(parseVector.at(index)->getType() == TokenType::PERIOD) {
        std::cout << "PERIOD found in rule" << std::endl;
        index++;
    } else {
        throw "Error found in rule - PERIOD";
    }
}

void Parser::parseQuery() {
    // predicate call
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering predicate---" << std::endl;
        parsePredicate();
    } else {
        throw "Error found in query - predicate call";
    }

    // Q_MARK
    if(parseVector.at(index)->getType() == TokenType::Q_MARK) {
        std::cout << "Q_MARK found in query" << std::endl;
        index++;
    } else {
        throw "Error found in query - Q_MARK";
    }
}

void Parser::parseHeadPredicate() {
    // ID
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "ID found in headPredicate" << std::endl;
        index++;
    } else {
        throw "Error found in headPredicate - ID";
    }

    // LEFT_PAREN
    if(parseVector.at(index)->getType() == TokenType::LEFT_PAREN) {
        std::cout << "LEFT_PAREN found in headPredicate" << std::endl;
        index++;
    } else {
        throw "Error found in headPredicate - LEFT_PAREN";
    }

    // ID
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "ID found in headPredicate" << std::endl;
        index++;
    } else {
        throw "Error found in headPredicate - ID";
    }

    // idList check
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "---Entering idList---" << std::endl;
        parseIDList();
    } else {
        throw "Error found in headPredicate - idList";
    }

    // RIGHT_PAREN
    if(parseVector.at(index)->getType() == TokenType::RIGHT_PAREN) {
        std::cout << "RIGHT_PAREN found in headPredicate" << std::endl;
        index++;
    } else {
        throw "Error found in headPredicate - RIGHT_PAREN";
    }
}

void Parser::parsePredicate() {
    // ID
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "ID found in predicate" << std::endl;
        index++;
    } else {
        throw "Error found in predicate - ID";
    }

    // LEFT_PAREN
    if(parseVector.at(index)->getType() == TokenType::LEFT_PAREN) {
        std::cout << "LEFT_PAREN found in predicate" << std::endl;
        index++;
    } else {
        throw "Error found in predicate - LEFT_PAREN";
    }

    // parameter
    if(parseVector.at(index)->getType() == TokenType::STRING) {
        std::cout << "---Entering parameter---" << std::endl;
        parseParameter();
    } else if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering parameter---" << std::endl;
        parseParameter();
    } else {
        throw "Error found in predicate - parameter";
    }

    // parameterList
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "---Entering parameterList---" << std::endl;
        parseParameterList();
    } else {
        throw "Error found in parameterList call";
    }

    // RIGHT_PAREN
    if(parseVector.at(index)->getType() == TokenType::RIGHT_PAREN) {
        std::cout << "RIGHT_PAREN found in predicate" << std::endl;
        index++;
    } else {
        throw "Error found in predicate - RIGHT_PAREN";
    }
}

void Parser::parsePredicateList() {
    // COMMA
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "COMMA found in predicateList" << std::endl;
        index++;
    } else {
        throw "Error found in predicateList - COMMA";
    }

    // predicate call
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering predicate---" << std::endl;
        parsePredicate();
    } else {
        throw "Error found in predicate call - predicateList";
    }

    // predicateList recursive
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "---Entering predicateList---" << std::endl;
        parsePredicateList();
    } else if(parseVector.at(index)->getType() == TokenType::PERIOD) {
        std::cout << "---LAMBDA---" << std::endl;
        return;
    } else {
        throw "Error found in predicateList recursive call";
    }
}

void Parser::parseParameterList() {
    // COMMA
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "COMMA found in parameterList" << std::endl;
        index++;
    } else {
        throw "Error found in parameterList - COMMA";
    }

    // parameter call
    if(parseVector.at(index)->getType() == TokenType::STRING) {
        std::cout << "---Entering parameter---" << std::endl;
        parseParameter();
    } else if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "---Entering parameter---" << std::endl;
        parseParameter();
    } else {
        throw "Error found in parameter call";
    }

    // parameterList call
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "---Entering parameterList---" << std::endl;
        parseParameterList();
    } else if(parseVector.at(index)->getType() == TokenType::RIGHT_PAREN) {
        std::cout << "---LAMBDA---" << std::endl;
        return;
    } else {
        throw "Error found in recursive parameterList call";
    }
}

void Parser::parseStringList() {
    // COMMA
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "COMMA found in stringList" << std::endl;
        index++;
    } else {
        throw "Error found in stringList - COMMA";
    }

    // STRING
    if(parseVector.at(index)->getType() == TokenType::STRING) {
        std::cout << "STRING found in stringList" << std::endl;
        index++;
    } else {
        throw "Error found in stringList - STRING";
    }

    // recursively call stringList
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "---Entering stringList---" << std::endl;
        parseStringList();
    } else if(parseVector.at(index)->getType() == TokenType::RIGHT_PAREN) {
        std::cout << "---LAMBDA---" << std::endl;
        return;
    } else {
        throw "Error found in stringList - recursive call";
    }
}

void Parser::parseIDList() {
    // COMMA
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "COMMA found in idList" << std::endl;
        index++;
    } else {
        throw "Error found in idList - COMMA";
    }

    // ID
    if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "ID found in idList" << std::endl;
        index++;
    } else {
        throw "Error found in idList - ID";
    }

    // recursively call idList
    if(parseVector.at(index)->getType() == TokenType::COMMA) {
        std::cout << "---Entering idList---" << std::endl;
        parseIDList();
    } else if(parseVector.at(index)->getType() == TokenType::RIGHT_PAREN) {
        std::cout << "---LAMBDA---" << std::endl;
        return;
    } else {
        throw "Error found in idList - recursive call";
    }
}

void Parser::parseParameter() {
    // STRING | ID
    if(parseVector.at(index)->getType() == TokenType::STRING) {
        std::cout << "STRING found in parameter" << std::endl;
        index++;
    } else if(parseVector.at(index)->getType() == TokenType::ID) {
        std::cout << "ID found in parameter" << std::endl;
        index++;
    } else {
        throw "Error found in parameter - STRING | ID";
    }
}




