#ifndef DATABASE_H
#define DATABASE_H

#include "Relation.h"
#include <map>
//#include "Interpreter.h"

class Database {

public:
    const map<std::string, Relation> &getMyMap() const {
        return myMap;
    }

public:

    Database(){};
    ~Database(){};

    map<std::string, Relation> myMap;

    void AddRelations(std::string &name, Relation &relation) {

        myMap.insert({name, relation});

    }

//    void AddTuples(std::vector<Predicate> newTuples) {
//        for(auto&& p : newTuples) {
//            Tuple newTuple();
//            newTuple().fillTuple(p.parameterList);
//
//
//        }
//    }

};


#endif //DATABASE_H
