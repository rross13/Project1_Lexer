#ifndef PARAMETER_H
#define PARAMETER_H

#include "DatalogProgram.h"
#include <iostream>

class Parameter {

public:
    Parameter() {

}
    ~Parameter() {

}

    std::string name;
    //bool isID = false;

    std::string toString() {
        return name;
    }

};


#endif //PARAMETER_H
