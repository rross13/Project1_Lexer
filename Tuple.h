#ifndef TUPLE_H
#define TUPLE_H

#include "DatalogProgram.h"
#include <iostream>
#include <vector>

class Tuple {

public:
    Tuple() {}
    Tuple(std::vector<string> newList) {
        for(unsigned int i = 0; i < newList.size(); i++) {
            values.push_back(newList.at(i));
        }
    }
    ~Tuple() {

    }
    std::vector<std::string> values;

    void fillTuple(std::vector<Parameter> factsVector) {
        for(unsigned int i = 0; i < factsVector.size(); i++) {
            values.push_back(factsVector.at(i).toString());
        }
    }

    bool operator< (const Tuple &rhs) const {
        return values < rhs.values;
    }

    void toString() {
        cout << "testing in Tuple.h" << endl;
    }



};


#endif //TUPLE_H
