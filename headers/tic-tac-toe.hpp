#pragma once

#include <iostream>
#include <string>

/* 
 * This class should contain the functions needed to
 * run the game like making board or making move...
 */
class Game {

    void displayBox (char symbol = ' ', int pos = 0) {
        ;
    }
};

/* 
 * This class should contain the properties of 
 * a player like the chosen symbol and moves required
 */
class Player {
    public:
    char symbol;
    int moves_remaining;

    Player (int moves) {
        moves_remaining = 5;
    }
};

/* 
 * This class should contain the properties of grid 
 * like which grid is filled with which symbol
 */
class Boxes {

};



