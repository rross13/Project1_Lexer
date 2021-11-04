#ifndef RELATION_H
#define RELATION_H

#include "Tuple.h"
#include "Header.h"
#include <iostream>
#include <vector>
#include <set>

class Relation {

public:
    Relation() {}

    Relation(std::string &newName, Header &newHeader) {

        name = newName;
        header = newHeader;

    }
    ~Relation() {

    }

    std::string name;
    Header header;
    std::set<Tuple> tupleSet;

    void addTuple(Tuple &newTuple) {
        tupleSet.insert(newTuple);
    }

    void toString() {
        for(auto&& t : tupleSet) {
            for(unsigned int i = 0; i < this->header.attributes.size(); i++) {
                cout << "  " << this->header.attributes[i] << "=" << t.values.at(i);
                if(i != this->header.attributes.size() - 1) {
                    cout << ",";
                }
            }
            cout << endl;

        }
    }

    Relation selectVal(int index, string name) {
        Relation r;
        for(auto&& t : this->tupleSet) {
            if(t.values.at(index) == name) {
                r.tupleSet.insert(t);
            }
        }
        return r;
    }

    Relation selectInd(int index, int index2) {
        Relation r;
        for(auto&& t : this->tupleSet) {
            if(t.values.at(index) == t.values.at(index2)) {
                r.tupleSet.insert(t);
            }
        }
        return r;
    }

    Relation project(vector<int> columns) {
        Relation r;

        for(auto&& t: this->tupleSet) {
            Tuple newTuple;

            for(unsigned int i = 0; i < columns.size(); i++) {
                newTuple.values.push_back(t.values.at(columns.at(i)));
            }
            r.tupleSet.insert(newTuple);
        }
        return r;

    }

    Relation rename(vector<string> newName) {
        Relation r;
        r.tupleSet = this->tupleSet;
        for(unsigned int i = 0; i < newName.size(); i++) {
            r.header.attributes.push_back(newName.at(i));
        }
        return r;
    }

};


#endif //RELATION_H
