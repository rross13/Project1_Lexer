#ifndef RULE_H
#define RULE_H

#include "Predicate.h"

//TODO: search on slack

class Rule {

public:
    Rule() {

    }
    ~Rule() {

    }

    std::string name;

    Predicate headPredicate;
    std::vector<Predicate> predicateVector;

    void toString() {
        //std::cout << "  ";
        headPredicate.toString();
        std::cout << " :- ";
        predicateVector.at(0).toString();
        if(predicateVector.size() > 1) {
            for(unsigned int i = 1; i < predicateVector.size(); i++) {
                std::cout << ",";
                predicateVector.at(i).toString();
            }
        }
        std::cout << ".";
//        std::cout << headPredicate.name << "(";
//        for(int i = 0; i < headPredicate.parameterList.size(); i++) {
//            std::cout << "," << headPredicate.parameterList.at(i);
//        }
//        std::cout << ") :- " << std::endl;

    }

};


#endif //RULE_H
