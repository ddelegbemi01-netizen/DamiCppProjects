// ProductApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Game.h"
#include "player.h"
#include <iostream>
#include "Enemy.h"



void displayMenu()
{
    std::cout << "\n=== C++ DUNGEON ===\n";
    std::cout << "1. Attack\n";
    std::cout << "2. Check stats\n";
    std::cout << "3. Run away\n";
    std::cout << "Choose an action: ";
}

bool fightGoblin(Player& combatPlayer, Enemy& goblin)
{
    std::cout << "you attack the Goblin\n";
    goblin.takeDamage(combatPlayer.getAttackPower());
    std::cout << "Goblin Health:"
        << goblin.getHealth()
        << '\n';
    if (goblin.getHealth() > 0)
    {
        std::cout << "The Goblin attacks you!\n";
        combatPlayer.takeDamage(goblin.getAttackPower());

        std::cout << "Your health: "
            << combatPlayer.getHealth()
            << '\n';

        if (combatPlayer.getHealth() <= 0)
        {
            std::cout << "You have been defeated!\n";
            std::cout << "GAME OVER\n";
        }
    }
    else
    {
        std::cout << "You defeated the Goblin!\n";
        std::cout << "VICTORY!\n";
        return false;

    }
    return combatPlayer.getHealth() > 0;
}
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

    
    while (true)
    {

        displayMenu();
        std::cin >> choice;

        if (choice == 1)
        {
            if (!fightGoblin(combatPlayer, goblin))
            {
                break;
            }
        }
        else if (choice == 2)
        {
            std::cout << "--Player Stats--\n";
            std::cout << "Health:"
                << combatPlayer.getHealth()
                << '\n';

            std::cout << "Attack Power:"
                << combatPlayer.getAttackPower()
                << '\n';
        }
       

        else if (choice == 3)
        {
            std::cout << "You ran away from the Goblin\n";
            break;
        }
        else
        {
            std::cout << "invalid choice!\n";
        }
    }

    return 0;
}
