#include "Avalanche.h"
Avalanche::Avalanche(){
    name="Avalanche";   
}
char Avalanche::makeMove(){
    return 'R';
}

char Avalanche::getMove(){
    return Avalanche::makeMove();
}


std::string Avalanche::getName(){
    return name;
}
Avalanche::~Avalanche(){};