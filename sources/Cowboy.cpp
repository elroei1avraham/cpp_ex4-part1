#include "Cowboy.hpp"
#include <iostream>
using namespace ariel;
using namespace std;

// constractor
// Cowboy ::Cowboy(int numOfBullets, Point point,int atPoints, string name)
// {
//     // this->numOfBullets;
// };

Cowboy ::Cowboy(string name, Point point)
{
    this->numOfBullets = 6;
};

// Cowboy ::Cowboy(Cowboy &cowboy)
// {
// }
// Cowboy ::Cowboy()
// {
// }
void Cowboy :: shoot(Character* Character)
{
}
bool Cowboy ::hasboolets()
{
   return false; 
}
void Cowboy :: reload()
{
}
string Cowboy ::print()
{
    return "";
}