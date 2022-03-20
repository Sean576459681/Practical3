#include "Bureaucrat.h"
Bureaucrat::Bureaucrat(){   
    name="Bureaucrat";
}
char Bureaucrat::makeMove(){
    return 'P';
}

char Bureaucrat::getMove(){
    return Bureaucrat::makeMove();
}

std::string Bureaucrat::getName(){
    return name;
}

Bureaucrat::~Bureaucrat(){};