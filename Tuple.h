#ifndef TUPLE_H
#define TUPLE_H

#include <vector>

class Tuple {

public:
    Tuple() {

    }
    ~Tuple() {

    }
    std::vector<std::string> values;

    bool operator< (const Tuple &rhs) const {
        return values < rhs.values;
    }



};


#endif //TUPLE_H
