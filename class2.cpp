#include <iostream>
#include"class.h"
int main()
{
    Fridge fr1("Bosch", 1, 3, 6, 3);
    GrosseryBag Bag1("Zara", 5, 5, 5);

    //fr1.eatYammies(fr1);
    fr1.putYammies(Bag1,fr1);
    fr1.checkFridgeContent();
    
    //Bag1.eatYammies(Bag1);
    //Bag1.putYammies(fr1,Bag1);
    Bag1.checkBagContent();
}

