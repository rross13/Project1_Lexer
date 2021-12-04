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
    std::vector<int> uniqueIndices;

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
        }

        uniqueIndices.clear();
        for (unsigned int i = 0; i < h2.size(); i++){
            bool found = false;
            for (int betaIndex : betaIndices){
                if (i == (unsigned int)betaIndex){
                    found = true;
                    break;
                }
            }
            if (!found){
                uniqueIndices.push_back(i);
            }
        }

        for (int index : uniqueIndices){
            newHeader.push_back(h2[index]);
        }
        return newHeader;
    }

    void findMatches (Relation r2) {
        alphaIndices.clear();
        betaIndices.clear();
        for(unsigned int i = 0; i < this->header.attributes.size(); i++) {
            for(unsigned int j = 0; j < r2.header.attributes.size(); j++) {
                if(this->header.attributes.at(i) == r2.header.attributes.at(j)) {
                    alphaIndices.push_back(i);
                    betaIndices.push_back(j);
                }
            }
        }
    }

    void addMatches(Relation& newRelation, Relation r2){
        for(auto&& o : this->tupleSet){
            for(auto&& i : r2.tupleSet){
                bool match = true;
                for (unsigned int j = 0; j < alphaIndices.size(); j++){
                    if (o.values[alphaIndices[j]] != i.values[betaIndices[j]]){
                        match = false;
                    }
                }
                if (match){
                    Tuple t = combineTuples(o, i);
                    newRelation.tupleSet.insert(t);
                }
            }
        }

    }

    Tuple combineTuples(Tuple t1, Tuple t2) {
        Tuple finalTuple;

        for(auto&& v : t1.values) {
            finalTuple.values.push_back(v);
        }
        for(unsigned int i = 0; i < uniqueIndices.size(); i++) {
            finalTuple.values.push_back(t2.values.at(uniqueIndices.at(i)));
        }
        return finalTuple;
    }

    Relation join(Relation r2) {
        Relation rFinal;
        findMatches(r2);
        vector<string> newHeader = combineHeader(this->header.attributes, r2.header.attributes);
        // set new header
        for(auto&& s: newHeader) {
            rFinal.header.attributes.push_back(s);
        }
        addMatches(rFinal, r2);
        return rFinal;
    }

    bool Unify(Relation finalRelation) {
        bool unified = false;
        for(auto&& t : finalRelation.tupleSet) {
            if(this->tupleSet.insert(t).second) {
                unified = true;
            }
        }
        return unified;
    }

};


#endif //RELATION_H
