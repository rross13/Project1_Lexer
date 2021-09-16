#ifndef TOKEN_H
#define TOKEN_H
#include <string>

enum class TokenType {
    COLON,
    COLON_DASH,
    WHITESPACE,
//    COMMA,
//    PERIOD,
//    Q_MARK,
//    LEFT_PAREN,
//    RIGHT_PAREN,
//    MULTIPLY,
//    ADD,
//    SCHEMES,
//    FACTS,
//    RULES,
//    QUERIES,
//    ID,
//    STRING,
//    COMMENT,
    EOF_TYPE,
    UNDEFINED
};

class Token
{
private:
    TokenType tokenType;
    std::string tokenDescription;
    int tokenLine;

public:
    Token(TokenType type, std::string description, int line);
    void toString();
    std::string tokenToString(TokenType);
    // TODO: add other needed methods
};

#endif // TOKEN_H

