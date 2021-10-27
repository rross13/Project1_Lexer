#ifndef PREDICATE_H
#define PREDICATE_H

#include "DatalogProgram.h"
#include "Parameter.h"
#include <iostream>
#include <vector>

class Predicate {

public:
    Predicate() {
    //FIXME: CREATE CONSTRUCTORS THAT ASSIGN NAME AND RECEIVE VECTOR OF PARAMETERS
}
    ~Predicate() {

}

    std::string name;
    std::vector<Parameter> parameterList;

    void toString() {
            //std::cout << "IN toString FUNCTION FOR PREDICATE" << std::endl;
           std::cout << name << "(";
        for(unsigned int i = 0; i < parameterList.size(); i++) {
            //std::cout << "in toString for Predicate" << std::endl;
            std::cout << parameterList.at(i).toString();
            if(i < parameterList.size() - 1) {
                std::cout << ",";
            }
        }
        std::cout << ")";

    }

};


#endif //PREDICATE_H
