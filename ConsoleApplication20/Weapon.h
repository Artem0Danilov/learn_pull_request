#pragma once
#include <iostream>

class Weapon
{
private:

	std::string name_;
	int damage_;
	int hp_;
	bool isAlive_;

	int getDamage(int damage);

public:

	Weapon(const std::string& name, int damage, int hp);

	void Status();
	int attak(Weapon& enemy);
};
