#include <iostream>
#include "class.h"
int main()
{
    Book b1("war", " me", 1800 , 10057.22, 200);
    Book b2("gun", "you", 1780, 687.59, 300);
    b1.showinfo();
    b2.showinfo();
    b1.swyear(32743);
    b2.swyear(2379);
    cout << b1.allprice() << "\n";
    cout << b2.allprice() << "\n";
    b1.buysmbook(65);
    b2.buysmbook(189);
    cout << b1.allprice() << "\n";
    cout << b2.allprice() << "\n";
    b1.showinfo();
    b2.showinfo();
    cout << b1.chanceofbuy() << "\n";
    cout << b2.chanceofbuy() << "\n";
    b1.funnygame();
}
