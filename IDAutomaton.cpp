#include "IDAutomaton.h"

void IDAutomaton::S0(const std::string& input) {
//    if (input[index] == '$' || input[index] == '&' || input[index] == '^') {
//        type = TokenType::UNDEFINED;
//        //newLines++;
//        return;
//    } else
    if (std::isalpha(input[index])) {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void IDAutomaton::S1(const std::string& input) {
//    if (index >= (int) input.size()) {
//        type = TokenType::UNDEFINED;
//        return;
//    }
    if (std::isalnum(input[index])) {
        inputRead++;
        index++;
        S1(input);
        return;
    } else {
        return;
    }


//      if (!std::isspace(input[index]) && index < (int) input.size()) {
    if (!std::isspace(input[index])) {
        inputRead++;
        index++;
        S1(input);
    }
    else if (std::isspace(input[index])) {
        index++;
        return;
    }
    else {
        Serr();
    }
}

