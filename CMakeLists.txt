cmake_minimum_required(VERSION 3.16)
project(Project1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project1
        main.cpp
        Lexer.cpp
        Lexer.h
        Token.cpp
        Token.h
        Automaton.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        WhiteSpaceAutomaton.cpp
        WhiteSpaceAutomaton.h
        LeftParenAutomaton.cpp
        LeftParenAutomaton.h
        RightParenAutomaton.cpp
        RightParenAutomaton.h
        CommaAutomaton.cpp
        CommaAutomaton.h
        PeriodAutomaton.cpp
        PeriodAutomaton.h QMarkAutomaton.cpp QMarkAutomaton.h AddAutomaton.cpp AddAutomaton.h MultiplyAutomaton.cpp MultiplyAutomaton.h SchemesAutomaton.cpp SchemesAutomaton.h FactsAutomaton.cpp FactsAutomaton.h RulesAutomaton.cpp RulesAutomaton.h QueriesAutomaton.cpp QueriesAutomaton.h StringAutomaton.cpp StringAutomaton.h)
