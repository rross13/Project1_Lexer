#ifndef WHITESPACEAUTOMATON_H
#define WHITESPACEAUTOMATON_H

#include "Automaton.h"
#include <cctype>

class WhiteSpaceAutomaton : public Automaton
{
public:
    WhiteSpaceAutomaton() : Automaton(TokenType::WHITESPACE) {}  // Call the base constructor

    void S0(const std::string& input);
};

#endif // WHITESPACEAUTOMATON_H

