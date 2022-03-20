#include "Computer.h"

Computer::Computer(){
    name="Computer";
}


char Computer::getMove(){
    return Computer::makeMove();
}

char Computer::makeMove(){
    return 'R';
}

std::string Computer::getName(){
    return name;
}

Computer::~Computer(){};
