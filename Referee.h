#ifndef Referee_h
#define Referee_h

#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"

class Referee{

    public:
        Referee();
        char refGame(Player* player1, Player* player2);
        int getWins();
        ~Referee();
    private:
        int wins;
};

#endif

// Referee

// Referee( ); // constructor 
// char refGame(Human player1, Computer player2) 
// // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)