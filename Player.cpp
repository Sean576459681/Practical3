#include "Player.h"
Player::Player(){
    name="Player";
}

char Player::makeMove(){
    return 'N';
}

char Player::getMove(){
    return Player::makeMove();
}

Player::~Player(){};

std::string Player::getName(){
    return name;
}