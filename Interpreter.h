#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "Relation.h"
#include "Database.h"

class Interpreter {

public:

    Interpreter() {}

    ~Interpreter() {}

    DatalogProgram newDatalogProgram;
    std::vector<Predicate> addRelations;
    std::vector<Predicate> addTuples;
    std::vector<string> variableNames;
    std::vector<int> variableIndices;
    Database database;
    bool addingTuples;

    void Interpret(DatalogProgram datalogProgram) {
        newDatalogProgram = datalogProgram;
        addRelations = newDatalogProgram.schemesVector;
        addTuples = newDatalogProgram.factsVector;
        AddRelation();
        AddTuples();
        EvaluateRules();
        EvaluateQueries();
    }

    void AddRelation() {
        for(unsigned int i = 0; i < addRelations.size(); i++) {
            Header newHeader(addRelations.at(i).parameterList);
            std::string relationName = addRelations.at(i).name;
            Relation newRelation(relationName, newHeader);
//            database.getMyMap().at(relationName);
            database.AddRelations(relationName, newRelation);
        }
    }

    void AddTuples() {
        for(unsigned int i = 0; i < addTuples.size(); i++) {
            std::string relationName = addTuples.at(i).name;

            std::vector<std::string> thisTuple;
            for(unsigned int j = 0; j < addTuples.at(i).parameterList.size(); j++) {
                string attribute = addTuples.at(i).parameterList.at(j).name;
                thisTuple.push_back(attribute);
            }
            Tuple currentTuple(thisTuple);
            database.myMap.at(relationName).addTuple(currentTuple);
        }
    }

    void EvaluateRules() {
        do{
            addingTuples = false;
            for(auto&& rule : newDatalogProgram.rulesVector) {
                EvaluateRule(rule);
            }
            

        }while(addingTuples);
    }

    void EvaluateRule(Rule rule) {
        std::vector<Relation> bodyRelations;
        for(auto&& predicate : rule.predicateVector) {
            bodyRelations.push_back(EvaluatePredicate(predicate));
        }
        Relation newRelation;

        if(bodyRelations.size() > 1) {
            newRelation = JoinRelations(bodyRelations);
        } else if(bodyRelations.size() == 1) {
            newRelation = bodyRelations[0];
        }
        std::vector<int> indices = findNewIndices(newRelation, rule.headPredicate.parameterList);
        newRelation = newRelation.project(indices);
        std::vector<string> newHeader = paramToStrings(rule.headPredicate.parameterList);
        newRelation.rename(newHeader);
        addingTuples = database.myMap[rule.headPredicate.name].Unify(newRelation);
    }

    Relation JoinRelations (std::vector<Relation> relations) {
        Relation r = relations[0];
        for(unsigned int i = 1; i < relations.size(); i++) {
            r = r.join(relations[i]);
        }
        return r;
    }

    void EvaluateQueries() {
        for(unsigned int i = 0; i < newDatalogProgram.queriesVector.size(); i++) {
            EvaluatePredicate(newDatalogProgram.queriesVector[i]);
        }
    }

    Relation EvaluatePredicate(Predicate query) {
        variableNames.clear();
        variableIndices.clear();
        Relation r = database.myMap[query.name];
        r = SelectOperations(r, query);
        r = r.project(variableIndices);
        r = r.rename(variableNames);

        query.toString();
        cout << "? ";
        if(!r.tupleSet.empty()) {
            cout << "Yes(" << r.tupleSet.size() << ")" << endl;
        } else {
            cout << "No" << endl;
        }
        r.toString();

        return r;
    }

    Relation SelectOperations(Relation &r, Predicate query) {
        //outer for loop
        for(unsigned int i = 0; i < query.parameterList.size(); i++) {
            if(!query.parameterList.at(i).isID) {
                r = r.selectVal(i, query.parameterList.at(i).name);
            }
            else if(query.parameterList.at(i).isID) {
                bool brandNew = true;
                for(unsigned int j = 0; j < variableNames.size(); j++) {
                    if(query.parameterList.at(i).name == variableNames.at(j)) {
                        brandNew = false;
                        r = r.selectInd(reinterpret_cast<int &>(i), variableIndices.at(j));
                    }
                }

                if(brandNew){
                    variableIndices.push_back(i);
                    variableNames.push_back(query.parameterList.at(i).name);
                }
            }
        }
        return r;
    }

    std::vector<int> findNewIndices(Relation r, std::vector<Parameter> paramList) {
        std::vector<int> newIndices;
        for(unsigned int i = 0; i < r.header.attributes.size(); i++) {
            for(unsigned int j = 0; j < paramList.size(); j++) {
                if(r.header.attributes.at(i) == paramList.at(j).toString()) {
                    newIndices.push_back(i);
                }

            }
        }
        return newIndices;
    }

    std::vector<string> paramToStrings(std::vector<Parameter> paramList) {
        std::vector<string> newVector;
        for(auto&& param : paramList) {
            newVector.push_back(param.name);
        }
        return newVector;
    }

    void toString() {
        cout << "starting in interpreter" << endl;

    }



};


#endif //INTERPRETER_H
