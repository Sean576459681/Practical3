#include "FistfullODollars.h"
//#include <iostream>

int FistfullODollars::index_FD = 0;

FistfullODollars::FistfullODollars(){   
    name="FistfullODollars";
}
char FistfullODollars::makeMove(){
    char ChoiceAry[3]={'R', 'P', 'P'};
    char Choice = ChoiceAry[index_FD%3];
    index_FD++;
    return Choice;
}

char FistfullODollars::getMove(){
    return FistfullODollars::makeMove();
}

FistfullODollars::~FistfullODollars(){
    //std::cout<<"FD delete";
};

std::string FistfullODollars::getName(){
    return name;
}