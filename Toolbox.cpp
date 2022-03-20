#include "Toolbox.h"
Toolbox::Toolbox(){   
    name="Toolbox";
}
char Toolbox::makeMove(){
    return 'S';
}

char Toolbox::getMove(){
    return Toolbox::makeMove();
}

Toolbox::~Toolbox(){};

std::string Toolbox::getName(){
    return name;
}