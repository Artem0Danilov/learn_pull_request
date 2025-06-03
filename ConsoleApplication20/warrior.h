#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>

class Warrior {
private:
    std::string name_;
    int health_;
    int attackPower_;
    int defense_;

public:
    
    Warrior(const std::string& name, int health, int attackPower, int defense);

   
    std::string getName() const;
    int getHealth() const;
    int getAttackPower() const;
    int getDefense() const;

    void takeDamage(int damage);
    void attack(Warrior& enemy);
    bool isAlive() const;

    void displayStats() const;
};

#endif // WARRIOR_H
