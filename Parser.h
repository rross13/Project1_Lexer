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

    void match(TokenType checkToken);
    //std::string nameToString(TokenType name);
    DatalogProgram datalogProgram;

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
    Rule parseHeadPredicate(Rule &newRule);
    Predicate parsePredicate(Predicate &addVector);
    vector<Predicate> parsePredicateList(vector<Predicate> &addVector);
    Predicate parseParameterList(Predicate &addVector);
    Predicate parseStringList(Predicate &addVector);
    Predicate parseIDList(Predicate &addVector);
    Predicate parseParameter(Predicate &addVector);

    const DatalogProgram &getDatalogProgram() const;
};


#endif //PARSER_H
