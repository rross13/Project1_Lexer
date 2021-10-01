#pragma once
#ifndef PARSER_H
#define PARSER_H
#include <vector>
#include "Token.h"
#include "DatalogProgram.h"


class Parser {
private:
    std::vector<Token*> parseVector;
    void CreateParser();
    int index;
    //bool parseResult = false;
public:
    Parser();
    ~Parser();

    void match(TokenType checkToken);

    void ParseProgram(std::vector<Token*> parseTokens);
    void Parse();
    void parseSchemeList();
    void parseFactList();
    void parseRuleList();
    void parseQueryList();
    void parseScheme();
    void parseFact();
    void parseRule();
    void parseQuery();
    void parseHeadPredicate();
    void parsePredicate();
    void parsePredicateList();
    void parseParameterList();
    void parseStringList();
    void parseIDList();
    void parseParameter();
};


#endif //PARSER_H
