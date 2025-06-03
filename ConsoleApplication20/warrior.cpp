#include <iostream>
#include "warrior.h"



Warrior::Warrior(const std::string& name, int health, int attackPower, int defense)
    : name_(name), health_(health), attackPower_(attackPower), defense_(defense) {
}


std::string Warrior::getName() const {
    return name_;
}

int Warrior::getHealth() const {
    return health_;
}

int Warrior::getAttackPower() const {
   return attackPower_;
}

int Warrior::getDefense() const {
   return defense_;
}


void Warrior::takeDamage(int damage) {
    int actualDamage = damage - defense_;
    if (actualDamage > 0) {
        health_ -= actualDamage;
        if (health_ < 0) {
            health_ = 0;
        }
    }
}


void Warrior::attack(Warrior& enemy) {
    if (isAlive()) {
        enemy.takeDamage(attackPower_);
        std::cout << name_ << " атакует " << enemy.getName() << " и наносит " << attackPower_ << " урона!" << std::endl;
    }
    else {
        std::cout << name_ << " не может атаковать, так как он повержен!" << std::endl;
    }
}


bool Warrior::isAlive() const {
    return health_ > 0;
}


void Warrior::displayStats() const {
    std::cout << "---------------------------\n";
    std::cout << "Имя: " << name_ << "\n"
        << "Здоровье: " << health_ << "\n"
        << "Сила атаки: " << attackPower_ << "\n"
        << "Защита: " << defense_ << "\n"
        << "Статус: " << (isAlive() ? "Жив" : "Повержен") << std::endl;
    std::cout << "---------------------------\n";
}