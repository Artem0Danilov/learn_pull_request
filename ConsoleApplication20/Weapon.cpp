#include "Weapon.h"
#include <iostream>

Weapon::Weapon(const std::string& name, int damage, int hp) : name_(name), damage_(damage), hp_(hp) {}

void Weapon::Status()
{
	std::cout << "-------------------------\n";
	std::cout << "Название орудия: " << name_ << std::endl;
	std::cout << "Урон орудия: " << damage_ << std::endl;
	std::cout << "Состояние орудия: " << hp_ << std::endl;
	std::cout << "-------------------------\n";
}

int Weapon::getDamage(int damage)
{
	if (not isAlive_) return 0;
	hp_ = -damage;
	if (hp_ < 0)
	{
		isAlive_ = false;
		hp_ = 0;
	}
	return hp_;
}

int Weapon::attak(Weapon& enemy)
{
	if (not isAlive_) return hp_;
	if (&enemy == this) return hp_;
	enemy.getDamage(damage_);
}