#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Computer.h"
#include <string>
class Crescendo :public Computer{
    public:
        Crescendo();
        char makeMove();   //make a move
        char getMove();    //get the move
        ~Crescendo();
        std::string getName();
    private:
        static int index_Cre;
        std::string name;

};
#endif