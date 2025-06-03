#include <iostream>
#include "Weapon.h"

int main()
{
    setlocale(LC_ALL, "ru");
    Weapon w1("Geacint", 140, 100);
    Weapon w2("ZIS-1", 80, 100);
    w1.Status();
    w2.Status();

    w1.attak(w2);
    w2.Status();
}
