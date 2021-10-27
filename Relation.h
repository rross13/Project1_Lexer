#ifndef RELATION_H
#define RELATION_H

#include "Tuple.h"
#include "Header.h"
#include <iostream>
#include <vector>
#include <set>

class Relation {

public:
    Relation(std::string &newName, std::vector<std::string> &newHeader) {

        name = newName;
        header = new Header(newHeader);

    }
    ~Relation() {

    }

    std::string name;
    Header header;
    std::set<Tuple> tupleSet;

    void addTuple(Tuple &newTuple) {
        tupleSet.insert(newTuple);
    }

};


#endif //RELATION_H
