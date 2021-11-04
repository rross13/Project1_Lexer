#ifndef HEADER_H
#define HEADER_H

#include "DatalogProgram.h"
#include <iostream>
#include <vector>

class Header {

public:
    Header(){}

    Header(std::vector<Parameter> attributeList) {
        for(unsigned int i = 0; i < attributeList.size(); i++) {
            attributes.push_back(attributeList.at(i).toString());
        }
    }

    ~Header() {

    }

    std::vector<std::string> attributes;

};


#endif //HEADER_H
