#pragma once

class Player
{
private:
	int health;
	int attackPower;

public:
	Player();
	 int getHealth() const;
	 int getAttackPower() const;

	 void takeDamage(int damage);
};


