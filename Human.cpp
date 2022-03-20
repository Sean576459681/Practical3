#include "Human.h"
#include <iostream>

Human::Human(){
    name="Human";
}

char Human::getMove(){
    return Human::makeMove();
}

char Human::makeMove(){
    char mov;
    std::cout<<"Make move:";
    std::cin>>mov;
    return mov;
}

std::string Human::getName(){
    return name;
}