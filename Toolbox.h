#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Computer.h"
#include <string>
class Toolbox :public Computer{
    public:
        Toolbox();
        char makeMove();   //make a move
        char getMove();    //get the move
        ~Toolbox();
        std::string getName();
    private:
        std::string name;

};
#endif