#include "WhiteSpaceAutomaton.h"

void WhiteSpaceAutomaton::S0(const std::string& input) {
    if (isspace(input[index])) {
        if(input[0] == '\n'){
            newLines++;
        }
        inputRead = 1;
    }

    else {
        Serr();
    }
}