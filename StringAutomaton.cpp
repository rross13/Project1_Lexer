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
    if (index >= (int) input.size()) {
        type = TokenType::UNDEFINED;
        return;
    }

    else if (input[index] != '\'') {
        if(input[index] == '\n') {
            newLines++;
        }
        inputRead++;
        index++;
        S1(input);
    }
    else if(input[index] == '\'') {
        inputRead++;
        index++;
        S2(input);
    }

//    else if (input[index] != '\'') {
//        inputRead++;
//        index++;
//        S1(input);
//    }
    else {
        Serr();
    }
}

void StringAutomaton::S2(const std::string& input) {
    if (index >= (int) input.size()) {
        type = TokenType::UNDEFINED;
        return;
    }
    if (input[index] != '\'') {
        return;
    }
    else if (input[index] == '\'') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}