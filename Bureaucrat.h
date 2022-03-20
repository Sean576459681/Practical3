#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Computer.h"
#include <string>
class Bureaucrat :public Computer{
    public:
        Bureaucrat();
        char makeMove();   
        char getMove();    
        ~Bureaucrat();
        std::string getName();
    private:
        std::string name;
};
#endif