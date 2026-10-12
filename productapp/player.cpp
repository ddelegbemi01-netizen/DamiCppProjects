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

void Player::takeDamage(int damage)
{
    health -= damage;

    if (health < 0)
    {
        health = 0;
    }
}
