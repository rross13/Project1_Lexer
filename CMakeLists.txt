cmake_minimum_required(VERSION 3.20)
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
        ColonDashAutomaton.h)
