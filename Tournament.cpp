#include "Tournament.h"
#include <iostream>
Tournament::Tournament(){

}

Player* Tournament::run(std::array<Player*,8> competitors){
    
    //------------------------player1 and player2 (0,1)------------------------
    Referee* ref1 = new Referee();
    for(int i = 0; i < 5; i++){
        ref1->refGame(competitors.at(0), competitors.at(1)); //return a W or T or L and have wins
    }
    //add the winner from play1 or player2 to semiFinalgroup(0)
    if(ref1->getWins()>=0){
        semiFinalGroup.at(0)=competitors.at(0);
    }else {
        semiFinalGroup.at(0)=competitors.at(1);
    }
    //std::cout<<"Player1 Verse Player2 Result: "<<ref1->getWins()<<std::endl;
    ref1->refGame(competitors.at(0), competitors.at(1));
    delete ref1;

    //------------------------player3 and player4 (2,3)------------------------
    Referee* ref2 = new Referee();
    for(int i = 0; i < 5; i++){
        ref2->refGame(competitors.at(2), competitors.at(3)); //return a W or T or L and have wins
    }
    //add the winner from play1 or player2 to semiFinalgroup(0)
    if(ref2->getWins()>=0){
        semiFinalGroup.at(1)=competitors.at(2);
    }else {
        semiFinalGroup.at(1)=competitors.at(3);
    }
    //std::cout<<"Player3 Verse Player4 Result: "<<ref2->getWins()<<std::endl;
    ref2->refGame(competitors.at(2), competitors.at(3));
    delete ref2;

    //------------------------player5 and player6 (4,5)------------------------
    Referee* ref3 = new Referee();
    for(int i = 0; i < 5; i++){
        ref3->refGame(competitors.at(4), competitors.at(5)); //return a W or T or L and have wins
    }
    //add the winner from play1 or player2 to semiFinalgroup(0)
    if(ref3->getWins()>=0){
        semiFinalGroup.at(2)=competitors.at(4);
    }else {
        semiFinalGroup.at(2)=competitors.at(5);
    }
    //std::cout<<"Player5 Verse Player6 Result: "<<ref3->getWins()<<std::endl;
    ref3->refGame(competitors.at(4), competitors.at(5));
    delete ref3;

    //------------------------player7 and player8 (6,7)------------------------
    Referee* ref4 = new Referee();
    for(int i = 0; i < 5; i++){
        ref4->refGame(competitors.at(6), competitors.at(7)); //return a W or T or L and have wins
    }
    //add the winner from play1 or player2 to semiFinalgroup(0)
    if(ref4->getWins()>=0){
        semiFinalGroup.at(3)=competitors.at(6);
    }else {
        semiFinalGroup.at(3)=competitors.at(7);
    }
    //make 6 choice to refresh the memory
    //std::cout<<"Player7 Verse Player8 Result: "<<ref4->getWins()<<std::endl;
    ref4->refGame(competitors.at(6), competitors.at(7));
    delete ref4;


    //------------------------------------------------------------------------------------------------
    //---------------------------------------------Semi Final-----------------------------------------
    //------------------------------------------------------------------------------------------------
    //competition between semiFinalGroup 0 and 1
    Referee* ref5 = new Referee();
    for(int i = 0; i < 5; i++){
        ref5->refGame(semiFinalGroup.at(0), semiFinalGroup.at(1)); //return a W or T or L and have wins
    }
    if(ref5->getWins()>=0){
        finalGroup.at(0)=semiFinalGroup.at(0);
    }else {
        finalGroup.at(0)=semiFinalGroup.at(1);
    }
    //std::cout<<"Semifinal Player1 Verse Player2 Result: "<<ref5->getWins()<<std::endl;
    ref5->refGame(semiFinalGroup.at(0), semiFinalGroup.at(1));
    delete ref5;

    //competition between semiFinalGroup 2 and 3
    Referee* ref6 = new Referee();
    for(int i = 0; i < 5; i++){
        ref6->refGame(semiFinalGroup.at(2), semiFinalGroup.at(3)); //return a W or T or L and have wins
    }
    if(ref6->getWins()>=0){
        finalGroup.at(1)=semiFinalGroup.at(2);
    }else {
        finalGroup.at(1)=semiFinalGroup.at(3);
    }
    //std::cout<<"Semifinal Player3 Verse Player4 Result: "<<ref6->getWins()<<std::endl;
    ref6->refGame(semiFinalGroup.at(2), semiFinalGroup.at(3));
    delete ref6;

    //------------------------------------------------------------------------------------------------
    //---------------------------------------------Final----------------------------------------------
    //------------------------------------------------------------------------------------------------
    //final competition
    Referee* ref7 = new Referee();
    for(int i = 0; i < 5; i++){
        ref7->refGame(finalGroup.at(0), finalGroup.at(1)); //return a W or T or L and have wins
    }
    //std::cout<<"Final Player1 Verse Player2 Result: "<<ref7->getWins()<<std::endl;
    if(ref7->getWins()>=0){
        //std::cout<<"Winner1 returnned\n";
        std::cout<<finalGroup.at(0)->getName()<<" Wins."<<std::endl;
        return finalGroup.at(0);
    }else {
        //std::cout<<"Winner2 returnned";
        return finalGroup.at(1);
        std::cout<<finalGroup.at(1)->getName()<<" Wins."<<std::endl;
    }
    // semi-final.at(0)= competitors.at(1);
    // return finalarray.at(0);
}

Tournament::~Tournament(){};