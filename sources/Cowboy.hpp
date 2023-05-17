#pragma once
#include <string>
#include <iostream>
#include "Character.hpp"

using namespace std;
namespace ariel
{
}
    class Cowboy : public Character
    {
    private:
        int numOfBullets;

    public:
        // Cowboy(int numOfBullets, Point point,int atPoints, string name);
        Cowboy(string name, Point point);
        // Cowboy(Cowboy &cowboy);
        // Cowboy();
        void shoot(Character* Character);
        bool hasboolets();
        void reload();
        string print() override;
    };
