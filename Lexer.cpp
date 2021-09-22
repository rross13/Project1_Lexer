#include "Lexer.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include "WhiteSpaceAutomaton.h"
#include "LeftParenAutomaton.h"
#include "RightParenAutomaton.h"
#include "CommaAutomaton.h"
#include "PeriodAutomaton.h"
#include "QMarkAutomaton.h"
#include "AddAutomaton.h"
#include "MultiplyAutomaton.h"

#include <iostream>

Lexer::Lexer() {
//    tokens = new std::vector<Token*>();
//    automata = new std::vector<Automaton*>();

    CreateAutomata();
}

Lexer::~Lexer() {
    for(unsigned int i = 0; i < automata.size(); i++) {
        delete automata.at(i);
    }
    for(unsigned int i = 0; i < tokens.size(); i++) {
        delete tokens.at(i);
    }

}

void Lexer::CreateAutomata() {
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    automata.push_back(new WhiteSpaceAutomaton());
    automata.push_back(new LeftParenAutomaton());
    automata.push_back(new RightParenAutomaton());
    automata.push_back(new CommaAutomaton());
    automata.push_back(new PeriodAutomaton());
    automata.push_back(new QMarkAutomaton());
    automata.push_back(new AddAutomaton());
    automata.push_back(new MultiplyAutomaton());
    // TODO: Add the other needed automata here
}

void Lexer::Run(std::string& input) {
    // TODO: convert this pseudo-code with the algorithm into actual C++ code

    int lineNumber = 1;

    while (!input.empty()) {
        int maxRead = 0;
        Automaton* maxAutomaton = nullptr;

        // TODO: you need to handle whitespace inbetween tokens

        // Here is the "Parallel" part of the algorithm
        //   Each automaton runs with the same input
        for (auto &&automaton : automata) {
            int inputRead = automaton->Start(input);
            if (inputRead > maxRead) {
                maxRead = inputRead;
                maxAutomaton = automaton;
                // Talk later w Jax
                lineNumber += automaton->NewLinesRead();
            }
        }

        // Here is the "Max" part of the algorithm
        if (maxRead > 0) {
            if(maxAutomaton->GetType() != TokenType::WHITESPACE) {


                Token *newToken = maxAutomaton->CreateToken(input.substr(0, maxRead), lineNumber);
                //lineNumber = lineNumber + maxAutomaton->NewLinesRead();
                tokens.push_back(newToken);
            }
            //newToken->tokenToString();

            // add newToken to collection of all tokens
        }
        // No automaton accepted input
        // Create single character undefined token
        else {
            maxRead = 1;
            auto* newToken =  new Token(TokenType::UNDEFINED, input.substr(0,1), lineNumber);
            maxRead = 1;
            tokens.push_back(newToken);
        }
        // Update `input` by removing characters read to create Token
        input = input.substr(maxRead,input.size());
    }
    //TODO: add end of file token to all tokens
    if(input.empty()) {
        auto* eofToken = new Token(TokenType::EOF_TYPE, "", lineNumber);
        tokens.push_back(eofToken);
    }


    //print all tokens
    for (auto& token: tokens) {
        token->toString();
    }
}