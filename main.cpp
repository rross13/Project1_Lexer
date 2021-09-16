#include <iostream>
#include <fstream>
#include "Lexer.h"

int main(int argc, char** argv) {
    std::string fileName = argv[1];
    std::ifstream input(fileName);
    if(!input.is_open()) {
        std::cout << "File " << fileName << " could not be found or opened." << std::endl;
        return 1;
    }

    std::string testFile = ":";

    Lexer* lexer = new Lexer();

    lexer->Run(testFile);

    // TODO
    // Remember to use ifstream instead of fstream for reading input

    //std::ifstream ifs;

    //ifs.open(file);



    delete lexer;

    return 0;
}