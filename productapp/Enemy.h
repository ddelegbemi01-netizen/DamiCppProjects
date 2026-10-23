#pragma once
class Enemy
{
private:
	int health;
	int attackPower;

public:
	Enemy();

	int getHealth() const;
	int getAttackPower() const;

	void takeDamage(int damage);
};