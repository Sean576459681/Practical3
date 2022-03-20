#include "Player.h"
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Tournament.h"
#include <array>
#include <iostream>

int main(){
    Avalanche* Player1 = new Avalanche();
    Bureaucrat* Player2 = new Bureaucrat();
    Bureaucrat* Player3 = new Bureaucrat();
    Toolbox* Player4 = new Toolbox();
    Toolbox* Player5 = new Toolbox();
    Crescendo* Player6 = new Crescendo();
    Crescendo* Player7 = new Crescendo();
    FistfullODollars* Player8 = new FistfullODollars();

    std::array<Player*, 8> competitors;
    competitors.at(0)=Player1;
    competitors.at(1)=Player2;
    competitors.at(2)=Player3;
    competitors.at(3)=Player4;
    competitors.at(4)=Player5;
    competitors.at(5)=Player6;
    competitors.at(6)=Player7;
    competitors.at(7)=Player8;

    Tournament* tournament1 = new Tournament();
    Player* winner = tournament1->run(competitors);
    std::cout<<winner->getName();
    std::cout<<winner->makeMove();
    std::cout<<winner->makeMove();
    std::cout<<winner->makeMove();
    std::cout<<std::endl;

    //not working 
    // Player1->getName();
    // competitors.at(0)->getName();

    //

    // if(typeid(winner) == typeid(Toolbox)){
    //     std::cout<<"Toolbox wins"<<std::endl;
    // }else if(typeid(winner) == typeid(RandomComputer)){
    //     std::cout<<"RandomComputer wins"<<std::endl;
    // }else if(typeid(winner) == typeid(Avalanche)){
    //     std::cout<<"Avalanche wins"<<std::endl;
    // }else if(typeid(winner) == typeid(Bureaucrat)){
    //     std::cout<<"Bureaucrat wins"<<std::endl;
    // }else if(typeid(winner) == typeid(Crescendo)){
    //     std::cout<<"Crescendo wins"<<std::endl;
    // }else if(typeid(winner) == typeid(PaperDoll)){
    //     std::cout<<"PaperDoll wins"<<std::endl;
    // }else if(typeid(winner) == typeid(FistfullODollars)){
    //     std::cout<<"FistfullODollars wins"<<std::endl;
    // }else if(typeid(winner) == typeid(Human)){
    //     std::cout<<"Human wins"<<std::endl;
    // }
    //RandomComputer* rand1 = new RandomComputer();
    // std::cout<<rand1->getMove()<<std::endl;
    // std::cout<<rand1->getMove()<<std::endl;
    // std::cout<<rand1->getMove()<<std::endl;
    return 0;
}