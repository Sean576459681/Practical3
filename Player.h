#ifndef PLAYER_H
#define PLAYER_H
#include <string>
class Player{
    public:
        Player();
        virtual char makeMove();
        virtual char getMove();
        virtual ~Player();
        virtual std::string getName();
    private:
        std::string name;

};
#endif