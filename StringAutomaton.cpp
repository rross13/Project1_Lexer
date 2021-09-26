#include "StringAutomaton.h"

void StringAutomaton::S0(const std::string& input) {
    if (input[index] == '\'') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void StringAutomaton::S1(const std::string& input) {
    if (input[index] == '\'') {
        inputRead++;
        index++;
        if(input[index] == '\'') {
            inputRead++;
            index++;
            S1(input);
        }
    }

    else if (input[index] != '\'') {
        inputRead++;
        index++;
        S1(input);
    } else if (index >= input.size()) {
        type = TokenType::UNDEFINED;
        return;
    }
    else {
        Serr();
    }
}

//void StringAutomaton::S2(const std::string& input) {
//    if (input[index] == '\'') {
//        inputRead++;
//    }
//    else {
//        Serr();
//    }
//}