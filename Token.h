#ifndef TOKEN_H
#define TOKEN_H
#include <string>
#include <vector>

enum class TokenType {
    COLON,
    COLON_DASH,
    LEFT_PAREN,
    RIGHT_PAREN,
    COMMA,
    PERIOD,
    Q_MARK,
    ADD,
    MULTIPLY,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    ID,
    STRING,
    COMMENT,
    WHITESPACE,
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
    TokenType getType();
    // return value function
    std::string getDescription();
    // return line function
    int getLine();
    std::string tokenToString(TokenType);
    //std::vector<Token*> findTokenVector();
    // TODO: add other needed methods
};

#endif // TOKEN_H

