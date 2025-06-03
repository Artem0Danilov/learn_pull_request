#include <iostream>
#include "car.h"
using namespace std; 

Revolver ::Revolver(const string& brand, int maxAmmo, int ammo): brand_(brand), maxAmmo_(maxAmmo), ammo_(ammo), cycles_(0)
{}

bool Revolver:: cockthegun(int ammostocharge)
{
    if (ammo_ + ammostocharge > maxAmmo_) 
    {
    return 0;
    } 

    ammo_ += ammostocharge;
    return 1; 
}

bool Revolver:: shoot()
{
    if(ammo_ == 0) 
    {
    return 0; 
    }

    ammo_ -= 1; 
    cout << "Pew!!\n";
    return 1; 
}


void Revolver:: showRevolver()
    {
        cout << "The brand is: " << brand_ << endl;   
        cout << "The max amount of ammo is " << endl; 
        cout << "The current amount of ammos " <<  ammo_ << endl; 
        cout << "The current amount of cycles is: " << cycles_ << endl; 
    }

void  Revolver:: removeAllAmmos()
{
    ammo_ -= ammo_;
    cout << "The current amount of ammos is 0" << endl; 
}





