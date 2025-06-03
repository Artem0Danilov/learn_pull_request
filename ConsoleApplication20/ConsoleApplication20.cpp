#include "class.h"

int main()
{
    Book b1("Master and Margarita", "M. Bulgakov", 2005, "In good condition");
    Book b2("Crime and punishment", "F. Dostoyevskiy", 1982, "Old book; cover needs fixing");

    b1.showInfo();
    b2.showInfo();
}
