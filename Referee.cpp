#include "Referee.h"
#include <iostream>

Referee::Referee(){
    wins=0;
}

char Referee::refGame(Player* player1, Player* player2){
    //std::cout<<"Inside referee: "<<player1.makeMove();
    char p1 = player1->getMove();
    char p2 = player2->getMove();
    //test used
    // std::cout<<"Player1: "<<p1<<std::endl;
    // std::cout<<"Player2: "<<p2<<std::endl;
    //
    if (p1 == p2){
        return 'T';
    }else if(p1 == 'P' && p2 == 'R'){ //paper vs rock
        wins++;
        return 'W';
    }else if(p1 == 'P' && p2 == 'S'){ //paper vs scissor
        wins--;
        return 'L';
    }else if(p1 == 'S' && p2 == 'R'){ //scissor vs rock
         wins--;
        return 'L';
    }else if(p1 == 'S' && p2 == 'P'){ //scissor vs paper
        wins++;
        return 'W';
    }else if(p1 == 'R' && p2 == 'P'){ //rock vs paper
         wins--;
        return 'L';
    }else if(p1 == 'R' && p2 == 'S'){ //rock vs scissor
        wins++;
        return 'W';
    }
    // std::cout<<"Inside referee: "<<result;
    return 'E';
}

int Referee::getWins(){
    return wins;
}

Referee::~Referee(){
    //std::cout<<"deleted";
}