#include "Lexer.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
//#include "AddAutomaton.h"
//#include "CommaAutomaton.h"
//#include "EndOfFileAutomaton.h"
//#include "LeftParenAutomaton.h"
//#include "RightParenAutomaton.h"
//#include "MultiplyAutomaton.h"
//#include "PeriodAutomaton.h"
//#include "QMarkAutomaton.h"

Lexer::Lexer() {
//    tokens = new std::vector<Token*>();
//    automata = new std::vector<Automaton*>();

    CreateAutomata();
}

Lexer::~Lexer() {
    // TODO: need to clean up the memory in `automata` and `tokens`

}

void Lexer::CreateAutomata() {
    automata.push_back(new ColonAutomaton());
//    automata.push_back(new ColonDashAutomaton());
//    automata.push_back(new AddAutomaton());
//    automata.push_back(new CommaAutomaton());
//    automata.push_back(new EndOfFileAutomaton());
//    automata.push_back(new LeftParenAutomaton());
//    automata.push_back(new RightParenAutomaton());
//    automata.push_back(new MultiplyAutomaton());
//    automata.push_back(new PeriodAutomaton());
//    automata.push_back(new QMarkAutomaton());
    // TODO: Add the other needed automata here
}

void Lexer::Run(std::string& input) {
    // TODO: convert this pseudo-code with the algorithm into actual C++ code

    int lineNumber = 1;
    int maxRead = 0;
    int inputRead = 0;
    Automaton *maxAutomaton;
    Token *newToken;

    while (input.size() > 0) {
        maxRead = 0;
        maxAutomaton = automata[0];
    }

        // TODO: you need to handle whitespace inbetween tokens

        // Here is the "Parallel" part of the algorithm
        //   Each automaton runs with the same input
        for (auto &&automaton : automata) {
            inputRead = automaton->Start(input);
            if (inputRead > maxRead) {
                maxRead = inputRead;
                maxAutomaton = automaton;
            }
        }

        // Here is the "Max" part of the algorithm
        if (maxRead > 0) {
            newToken = maxAutomaton->CreateToken(input, lineNumber);
            lineNumber = lineNumber + maxAutomaton->NewLinesRead();
            tokens.push_back(newToken);
            //newToken->tokenToString();

            // add newToken to collection of all tokens
        }
        // No automaton accepted input
        // Create single character undefined token
        else {
            maxRead = 1;
            // TODO: RESUME HERE

            Token *myToken =  new Token(input, inputRead, lineNumber);
//            (with first character of input)
            tokens.push_back(myToken);
        }
        // Update `input` by removing characters read to create Token
        input = input[maxRead, input.size()];
    }
    //TODO: add end of file token to all tokens
//}
