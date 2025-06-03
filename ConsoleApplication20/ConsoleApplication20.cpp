#include "Animal.h"
#include <iostream>

int main() {
    Animal lion("Lion", 5);
    lion.showInfo();

    std::cout << "\nAttack possible: " << (lion.attack() ? "Yes" : "No") << std::endl;
    std::cout << "Need food: " << lion.weNeedFood() << std::endl;

    lion.showInfo();

    return 0;
}