#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
private:
    std::string typeName_;
    int age_;
    bool isAlive_;
    bool isHungry_;
    bool isWild_;
    int inThePack_;

public:
    Animal(const std::string& typeName, int age);

    bool weNeedFood();
    bool attack() const;
    void showInfo() const;

};

#endif