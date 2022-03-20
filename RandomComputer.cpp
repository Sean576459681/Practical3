#include "RandomComputer.h"
#include <iostream>
RandomComputer::RandomComputer(){
    name="RandomComputer";

}
char RandomComputer::makeMove(){
    char choice = 'N';
    srand (time(NULL));
	int v1 = rand() % 3 + 1; //v1 may has value 1,2,3
    if(v1 == 1){
        choice = 'R';
    }else if(v1 == 2){
        choice = 'S';
    }else if(v1 == 3){
        choice = 'P';
    }
    return choice;
}

char RandomComputer::getMove(){
    return RandomComputer::makeMove();
}

RandomComputer::~RandomComputer(){};

std::string RandomComputer::getName(){
    return name;
}