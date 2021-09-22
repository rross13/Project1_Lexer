#include "Token.h"
#include <iostream>

Token::Token(TokenType type, std::string description, int line) {
    tokenType = type;
    tokenDescription = description;
    tokenLine = line;
}

void Token::toString() {
    std::cout << "(" << tokenToString(this->tokenType) << ", \"" << this->tokenDescription << "\", " << this->tokenLine << ")\n";
}

std::string Token::tokenToString(TokenType type) {
    // TODO: ADD ALL TOKENS, FINISH FORMATTING
    // SWITCH METHOD
    switch(type) {
        case TokenType::COLON: return "COLON";
        case TokenType::COLON_DASH: return "COLON_DASH";
        case TokenType::WHITESPACE: return "";
        case TokenType::LEFT_PAREN: return "LEFT_PAREN";
        case TokenType::RIGHT_PAREN: return "RIGHT_PAREN";
        case TokenType::COMMA: return "COMMA";
        case TokenType::PERIOD: return "PERIOD";
        case TokenType::Q_MARK: return "Q_MARK";
        case TokenType::ADD: return "ADD";
        case TokenType::MULTIPLY: return "MULTIPLY";
        case TokenType::SCHEMES: return "SCHEMES";
        case TokenType::FACTS: return "FACTS";
        case TokenType::RULES: return "RULES";
        case TokenType::QUERIES: return "QUERIES";

        case TokenType::EOF_TYPE: return "EOF";
        case TokenType::UNDEFINED: return "";
    } return "ERROR";
//    if(type == TokenType::COLON) {
//        std::cout << "(COLON, \":\"," << std::to_string(lineNumber) << ")";
//    }
}

