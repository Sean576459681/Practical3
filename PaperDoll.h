#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"
#include <string>
class PaperDoll :public Computer{
    public:
        PaperDoll();
        char makeMove();   //make a move
        char getMove();    //get the move
        ~PaperDoll();
        std::string getName();
    private:
        static int index_PD;
        std::string name;

};
#endif