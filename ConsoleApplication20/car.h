#ifndef CAR_H
#define CAR_H
#include <algorithm>
#include <iostream>
#include <string.h> 
using namespace std; 

class Revolver 
{
    private: 
        string brand_; 
        const int maxAmmo_;
        int ammo_; 
        int cycles_; 
    public:
        Revolver(const string& brand, int maxAmmo, int ammo);

        bool cockthegun(int ammostocharge);
        bool shoot();
        void showRevolver();
        void removeAllAmmos();
        
};
#endif
