#include "IDAutomaton.h"

void IDAutomaton::S0(const std::string& input) {
    if (input[index] == '$' || input[index] == '&' || input[index] == '^') {
        type = TokenType::UNDEFINED;
        //newLines++;
        return;
    } else if (std::isalpha(input[index])) {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void IDAutomaton::S1(const std::string& input) {
    if (!std::isalnum(input[index])) {
        return;
    }

    if (!std::isspace(input[index]) && index < input.size()) {
        inputRead++;
        index++;
        S1(input);
    }
//    else if (index >= input.size()) {
//        type = TokenType::UNDEFINED;
//        newLines++;
//        return;
//    }
    else if (index >= input.size()) {
        type = TokenType::UNDEFINED;
        return;
    }
    else if (std::isspace(input[index])) {
        index++;
    }
    else {
        Serr();
    }
}

//void IDAutomaton::S2(const std::string& input) {
//    if (input[index] == '|') {
//        inputRead++;
//        index++;
//        S3(input);
//    } else if (std::isalpha(input[index]) || std::isspace(input[index])) {
//        inputRead++;
//        index++;
//        S2(input);
//    }
//    else {
//        Serr();
//    }
//}

