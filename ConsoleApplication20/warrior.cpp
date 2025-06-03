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
        std::cout << name_ << " ������� " << enemy.getName() << " � ������� " << attackPower_ << " �����!" << std::endl;
    }
    else {
        std::cout << name_ << " �� ����� ���������, ��� ��� �� ��������!" << std::endl;
    }
}


bool Warrior::isAlive() const {
    return health_ > 0;
}


void Warrior::displayStats() const {
    std::cout << "---------------------------\n";
    std::cout << "���: " << name_ << "\n"
        << "��������: " << health_ << "\n"
        << "���� �����: " << attackPower_ << "\n"
        << "������: " << defense_ << "\n"
        << "������: " << (isAlive() ? "���" : "��������") << std::endl;
    std::cout << "---------------------------\n";
}