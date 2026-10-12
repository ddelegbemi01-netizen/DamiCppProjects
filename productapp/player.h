#pragma once

class Player
{
private:
	int health;
	int attackPower;
	//int damage;

public:
	Player();
	 int getHealth() const;
	 int getAttackPower() const;

	 void takeDamage(int damage);
};


