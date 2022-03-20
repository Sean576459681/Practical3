#include "PaperDoll.h"

int PaperDoll::index_PD = 0;

PaperDoll::PaperDoll(){   
    name="PaperDoll";
}
char PaperDoll::makeMove(){
    char ChoiceAry[3]={'P', 'S', 'S'};
    char Choice = ChoiceAry[index_PD%3];
    index_PD++;
    return Choice;
}

char PaperDoll::getMove(){
    return PaperDoll::makeMove();
}

std::string PaperDoll::getName(){
    return name;
}

PaperDoll::~PaperDoll(){};