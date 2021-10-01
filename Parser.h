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
public:
    Parser();
    ~Parser();

    void Parse(std::vector<Token*> parseTokens);
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
