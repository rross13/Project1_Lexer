#include "CommentAutomaton.h"

void CommentAutomaton::S0(const std::string& input) {
    if (input[index] == '#') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void CommentAutomaton::S1(const std::string& input) {
    if (input[index] == '|') {
        inputRead++;
        index++;
        S2(input);
    }
//    else if (index >= input.size()) {
//        type = TokenType::UNDEFINED;
//        newLines++;
//        return;
//    }
    else if (input[index] != '\n') {
        inputRead++;
        index++;
        S4(input);
    }
    else {
        Serr();
    }
}

void CommentAutomaton::S2(const std::string& input) {
    if (index >= input.size()) {
        type = TokenType::UNDEFINED;
        return;
    } else if (input[index] == '|') {
        inputRead++;
        index++;
        S3(input);
    } else if (input[index] != '|') {
        if (input[index] == '\n') {
            newLines++;
        }
        inputRead++;
        index++;
        S2(input);
    } else {
        Serr();
    }
}

void CommentAutomaton::S3(const std::string& input) {
    if (input[index] == '#') {
        inputRead++;
        index++;
    } else if (input[index] != '#') {
//        inputRead++;
//        index++;
        S2(input);
    }
    else {
        Serr();
    }
}

void CommentAutomaton::S4(const std::string& input) {
    if (input[index] == '\n') {
        //inputRead++;
        return;
    }
    else if (index >= input.size()) {
        //FIXME: IDK WHAT'S WRONG
        //type = TokenType::UNDEFINED;
        //newLines++;
        return;
    }

    else if (input[index] != '\n') {
        inputRead++;
        index++;
        S4(input);
    }
//    else if (input[index] == EOF) {
//        return;
//    }

    else {
        Serr();
    }
}