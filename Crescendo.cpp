#include "Crescendo.h"

int Crescendo::index_Cre = 0;

Crescendo::Crescendo(){   
    name="Crescendo";
}
char Crescendo::makeMove(){
    char ChoiceAry[3]={'P', 'S', 'R'};
    char Choice = ChoiceAry[index_Cre%3];
    index_Cre++;
    return Choice;
}

char Crescendo::getMove(){
    return Crescendo::makeMove();
}

std::string Crescendo::getName(){
    return name;
}

Crescendo::~Crescendo(){};