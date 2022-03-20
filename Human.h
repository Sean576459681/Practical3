#ifndef HUMAN_H
#define HUMAN_H
#include <string>
class Human{

    public:
        Human();
        char makeMove();
        char getMove();
        std::string getName();
    private:
        //char move;
        std::string name;
};

#endif


// Human( ); // constructor
// char makeMove( );  