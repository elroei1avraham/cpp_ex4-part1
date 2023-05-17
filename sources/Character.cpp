#include "Character.hpp"
#include <iostream>
using namespace ariel;
using namespace std;

// constractor
Character ::Character(Point point, int atPoints, string name)
{
    this->point = point;
    this->atPoints = atPoints;
    this->name = name;
};

Character ::Character(const Character &Character)
{
}
Character ::Character()
{
}

bool Character ::isAlive()
{
    return 0;
}
double Character ::distance(Character Character)
{
    return 0;
}
void Character ::hit(int num)
{
}

string Character ::getName()
{
    return 0;
}

Point Character ::getLocation()
{
    Point point(1, 3);
    return point;
}
string Character ::print()
{
    return "";
}