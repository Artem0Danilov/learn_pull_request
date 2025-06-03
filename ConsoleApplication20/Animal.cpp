#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string& typeName, int age)
    : typeName_(typeName), age_(age), isAlive_(true), isHungry_(true), isWild_(true), inThePack_(1) {
}
bool Animal::weNeedFood() {
    if (isHungry_) {
        isHungry_ = false;
        return 1; // Нужна еда
    }
    return 0; // Не нужна еда
}

bool Animal::attack() const {
    return isWild_ && isAlive_;
}

void Animal::showInfo() const {
    std::cout << "Type: " << typeName_ << std::endl;
    std::cout << "Age: " << age_ << std::endl;
    std::cout << "Status: " << (isAlive_ ? "Alive" : "Dead") << std::endl;
    std::cout << "Hungry: " << (isHungry_ ? "Yes" : "No") << std::endl;
    std::cout << "Wild: " << (isWild_ ? "Yes" : "No") << std::endl;
    std::cout << "In the pack: " << inThePack_ << std::endl;
}