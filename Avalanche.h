#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Computer.h"
#include <string>
class Avalanche :public Computer{
    public:
        Avalanche();
        char makeMove();   
        char getMove();    
        std::string getName();
        ~Avalanche();
    private:
        std::string name;
};
#endif