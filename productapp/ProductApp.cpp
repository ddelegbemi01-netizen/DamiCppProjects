// ProductApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Game.h"
#include "player.h"
#include <iostream>


int main()
{
    Game game;
    game.run();
    

    Player player;

    std::cout << "PlayerHealth:"
      
        << player.getHealth()
        << '\n';

    std::cout << "Player Attack:"
        << player.getAttackPower()
        << '\n';

    return 0;
}
