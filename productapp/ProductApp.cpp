// ProductApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Game.h"
#include "player.h"
#include <iostream>
#include "Enemy.h"


int main()
{
    Game game;
    game.run();
    

    Player player;
    Player combatPlayer;


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

    Player testPlayer;

    testPlayer.takeDamage(-20);

    std::cout << "Health after negative damage: "
        << testPlayer.getHealth()
        << '\n';

    Enemy goblin;
    std::cout << "\nGoblin Health:"
        << goblin.getHealth()
        << '\n';

    std::cout << "Goblin Attack:"
        << goblin.getAttackPower()
        << '\n';

    std::cout << "The player attacks the Goblin!\n";
    goblin.takeDamage(combatPlayer.getAttackPower());

    std::cout << " Goblins health after attack:"
    << goblin.getHealth()
    << '\n';

    std::cout << "The Goblin attacks the player! \n";
    combatPlayer.takeDamage(goblin.getAttackPower());

    std::cout << "Players Health after attack: "
        << combatPlayer.getHealth()
        << '\n';

    int choice;

    std::cout << "\n=== C++ DUNGEON ===\n";
    std::cout << "1. Attack\n";
    std::cout << "2. Check stats\n";
    std::cout << "3. Run away\n";
    std::cout << "Choose an action:";

    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "\nYou attack the Goblin!\n";

        goblin.takeDamage(combatPlayer.getAttackPower());

        std::cout << "Goblin health: "
            << goblin.getHealth()
            << '\n';


        if (goblin.getHealth() > 0)
        {
            std::cout << "The Goblin attacks you\n";
            combatPlayer.takeDamage(goblin.getAttackPower());
            std::cout << "Your Health:"
                << combatPlayer.getHealth()
                << '\n';
        }
        else
        {
            std::cout << "You defeated the Gonlin!\n";
        }
    }
    else if (choice == 2)
    {
        std::cout << "You chose to check your stats!\n";
    }
    else if (choice == 3)
    {
        std::cout << "you chose to run away\n";
    }
    else
    {
        std::cout << "invalid choice!\n";
    }

    return 0;
}
