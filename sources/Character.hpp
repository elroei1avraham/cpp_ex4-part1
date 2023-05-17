#pragma once
#include <string>
#include <iostream>
#include "Point.hpp"

using namespace std;
namespace ariel
{
}
    class Character
    {
    private:
        Point point;
        int atPoints;
        string name;

    public:
        Character(Point point,int atPoints, string name);
        Character(const Character &Character);
        Character();
        virtual ~Character() = default;
        bool isAlive();
        double distance(Character otherCharacter);
        void hit(int num);
        string getName();
        Point getLocation();
        virtual string print();
        
        Character& operator=(const Character&) = default; 
        Character(Character&&) = default; 
        Character& operator=(Character&&) = default;
    };
