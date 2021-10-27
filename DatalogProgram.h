#pragma once
#ifndef DATALOGPROGRAM_H
#define DATALOGPROGRAM_H

#include "Predicate.h"
#include "Parameter.h"
#include "Rule.h"
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

class DatalogProgram {
private:


public:
    DatalogProgram() {

}
    ~DatalogProgram() {

}

    vector<Predicate> schemesVector;
    vector<Predicate> factsVector;
    set<string> domainSet;
    vector<Predicate> queriesVector;
    vector<Rule> rulesVector;

    void toString() {
        cout << "Schemes(" << schemesVector.size() << "):" << endl;
        //cout << "entering schemesVector loop" << endl;
        for(auto &&scheme : schemesVector) {
            //cout << "in for loop" << endl;
            cout << "  ";
            scheme.toString();
            cout << endl;
            //cout << "leaving first loop" << endl;
        }
        cout << "Facts(" << factsVector.size() << "):" << endl;
        for(auto&& fact : factsVector) {
            cout << "  ";
            fact.toString();
            cout << "." << endl;
        }
        cout << "Rules(" << rulesVector.size() << "):" << endl;
        for(auto&& rule : rulesVector) {
            cout << "  ";
            rule.toString();
            cout << endl;
        }
        cout << "Queries(" << queriesVector.size() << "):" << endl;
        for(auto&& query : queriesVector) {
            cout << "  ";
            query.toString();
            cout << "?" << endl;
        }
        cout << "Domain(" << domainSet.size() << "):";
        for(auto&& domain : domainSet) {
            cout << endl;
            cout << "  ";
            cout << domain;
        }



    }

};


#endif //DATALOGPROGRAM_H
