#include <iostream>
#include "warrior.h"


int main() {
    setlocale(LC_ALL, "ru");
    Warrior warrior1("Арагорн", 100, 20, 5);
    Warrior warrior2("Горлум", 80, 15, 3);

    warrior1.displayStats();
    warrior2.displayStats();

    warrior1.attack(warrior2);
    warrior2.attack(warrior1);

    warrior1.displayStats();
    warrior2.displayStats();

    
}