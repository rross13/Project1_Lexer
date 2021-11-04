#include <iostream>
#include <fstream>
#include <sstream>
#include "Lexer.h"
#include "Parser.h"
#include "Interpreter.h"


int main(int argc, char** argv) {
    std::ifstream ifs(argv[1]);
    if(!ifs.is_open()){
        std::cout << "Could not open " << argv[1] << std::endl;
        return 1;
    }
    std::stringstream ss;
    ss << ifs.rdbuf();
    std::string test = ss.str();
    ifs.close();



    auto* lexer = new Lexer();

    lexer->Run(test);

    std::vector<Token*> parseTokens;
    parseTokens = lexer->returnTokens();

    auto* parser = new Parser();

    parser->ParseProgram(parseTokens);

    //TODO: PROJECT 3 STARTS HERE

    auto* interpreter = new Interpreter();

    interpreter->Interpret(parser->getDatalogProgram());

    delete lexer;

    return 0;
}