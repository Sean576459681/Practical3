#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <string>
class Computer :public Player{

    public:
        Computer();
        char makeMove();   //make a move
        char getMove();    //get the move
        ~Computer();
        std::string getName();
    private: 
        //char move;
        std::string name;

};
#endif


// Computer

// Computer( ); // constructor 
// char makeMove( );  