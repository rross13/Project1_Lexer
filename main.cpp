#include <iostream>
#include <fstream>
#include <sstream>
#include "Lexer.h"


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
//    std::string fileName = argv[1];
//    std::ifstream input(fileName);
//    std::string test;
//
//    std::ifstream ifs (argv[1], std::ifstream::binary);
//
//    std::filebuf* pbuf = ifs.rdbuf();
//
//    std::size_t size = pbuf->pubseekoff (0,std::ifstream::end,std::ifstream::in);
//    pbuf->pubseekpos (0,std::ifstream::in);
//
//    char* buffer=new char[size];
//
//    pbuf->sgetn (buffer,size);
//    ifs.close();
//
//    // write content to stdout
//    //std::cout.write (buffer,size);
//
//    std::stringstream ss;
//    ss.str (buffer);
//
//    test = ss.str();
//    LEAVE OUTstd::string s = ss.str();
//    LEAVE OUTstd::cout << s << '\n';
//
//    delete[] buffer;

//    if(!ifs.is_open()) {
//        std::cout << "File " << fileName << " could not be found or opened." << std::endl;
//        return 1;
//    }

    Lexer* lexer = new Lexer();

    lexer->Run(test);

    // TODO
    // Remember to use ifstream instead of fstream for reading input

    //std::ifstream ifs;

    //ifs.open(file);



    delete lexer;

    return 0;
}