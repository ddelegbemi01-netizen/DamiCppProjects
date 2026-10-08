#include "Player.h"

Player::Player()
    : health{ 100 },
    attackPower{ 10 }
{
}

int Player::getHealth() const
{
    return health;
}

int Player::getAttackPower() const
{
    return attackPower;
}