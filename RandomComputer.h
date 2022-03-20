#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Computer.h"
#include <string>
class RandomComputer :public Computer{
        public:
        RandomComputer();
        char makeMove();   //make a move
        char getMove();    //get the move
        ~RandomComputer();
        std::string getName();
        private:
        std::string name;
};
#endif