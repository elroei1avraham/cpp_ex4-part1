#pragma once
#include <string>
#include <iostream>
#include "Character.hpp"

using namespace std;
namespace ariel
{
}
    class Ninja : public Character
    {
    private:
        int speed;

    public:
        Ninja(int speed, Point point,int atPoints, string name);
        Ninja(string name, Point point);
        // Ninja(Ninja &ninja);
        // Ninja();
        void move(Character* Character);
        void slash(Character* otherCharacter);
        string print() override;
    };
