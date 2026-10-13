#include "Enemy.h"	
Enemy::Enemy()
	: health{50},
	attackPower{5}	
{

}

int Enemy::getHealth() const
{
	return health;
}
int Enemy::getAttackPower() const
{
	return attackPower;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
	{
		return;
	}
	health -= damage;
	if (health < 0)
	{
		health = 0;
	}
}