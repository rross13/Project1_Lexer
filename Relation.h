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
    std::vector<int> alphaIndices;
    std::vector<int> betaIndices;

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

    vector<string> combineHeader(vector<string> h1, vector<string> h2) {
        vector<string> newHeader;
        for(auto&& o: h1) {
            newHeader.push_back(o);
            for(auto&& i: h2) {
                if(o != i) {
                    newHeader.push_back(i);
                }
            }
        }
        return newHeader;
    }

    vector<string> findMatches (Relation r2) {
        for(unsigned int i = 0; i < this->header.attributes.size(); i++) {
            for(unsigned int j = 0; j < r2.header.attributes.size(); j++) {
                if(this->header.attributes.at(i) == r2.header.attributes.at(j)) {
                    alphaIndices.push_back(i);
                    betaIndices.push_back(j);
                }
            }
        }
    }

    Relation join(Relation r2) {
        Relation rFinal;
        vector<string> newHeader = combineHeader(this->header.attributes, r2.header.attributes);
        // set new header
        for(auto&& s: newHeader) {
            rFinal.header.attributes.push_back(s);
        }



        return rFinal;
    }

};


#endif //RELATION_H
