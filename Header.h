#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>

class Header {

public:
    Header(std::vector<std::string> attributeList) {
        for(unsigned int i = 0; i < attributeList.size(); i++) {
            attributes.push_back(attributeList.at(i));
        }
    }

    ~Header() {

    }

    std::vector<std::string> attributes;

};


#endif //HEADER_H
