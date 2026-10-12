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

    std::cout << "Starting health: "
        << player.getHealth()
        << '\n';

    player.takeDamage(25);

    std::cout << "Health after taking 25 damage: "
        << player.getHealth()
        << '\n';

    player.takeDamage(150);

    std::cout << "Health after taking 150 damage: "
        << player.getHealth()
        << '\n';

    return 0;
}
