#include <iostream>
#include <stdexcept>
#include <sstream>
#include "doctest.h"
#include "sources/Team.hpp"
using namespace std;
using namespace ariel;

TEST_CASE("check point class")
{
    Point p1(1,1);
    Point p2(4,4);

    CHECK(p1.distance(p2) == 1);
    double distanceP1 = p1.distance(p2);
    double distanceP2 = p2.distance(p1);
    CHECK(distanceP1 == distanceP2);
    Point a(1,1);
    Point temp = Point::moveTowards(p1 , p2, distanceP1);
    CHECK(temp == a);
    string print = p1.printPoint();
    string ans ="(1,1)";
    CHECK(print == ans); 
}

TEST_CASE("check character class")
{
    Point elroeiLocation(1,1);
    OldNinja first("elroei", elroeiLocation);
    Point a(1,1);
    CHECK(first.getLocation()==a);
    CHECK(first.getName()=="elroei");
    CHECK(first.isAlive()==true);
    string printElroei = first.print();
    CHECK(printElroei=="elroei 1000 (1,1)");
    first.hit(300);
    CHECK(first.isAlive()==true);
    Point secondLocation(4,4);
    OldNinja second("other", secondLocation);
    double distanceBetween = first.distance(second);
    CHECK(distanceBetween == 1); 
    first.hit(700);
    CHECK(first.isAlive()==false);
}

TEST_CASE("check cowboy class")
{
    Point elroeiLocation(1,1);
    OldNinja first("elroei", elroeiLocation);
    CHECK(first.getLocation() == elroeiLocation);
    Point a(6,1);
    Cowboy warrior("talor", a);
    CHECK(warrior.getName() == "talor");
    Point c(6,1);
    CHECK(warrior.getLocation() == c);
    CHECK(warrior.hasboolets() == true);
    CHECK(warrior.isAlive() == true);
    warrior.hit(120);
    CHECK(warrior.isAlive() == false);
    first.hit(90);
    warrior.shoot(&first);
    warrior.shoot(&first);
    warrior.shoot(&first);
    warrior.shoot(&first);
    warrior.shoot(&first);
    warrior.shoot(&first);
    CHECK(first.isAlive()==false);
    CHECK(warrior.hasboolets()==false);
    first.move(&warrior);
    CHECK_FALSE(first.getLocation()==elroeiLocation);
    warrior.reload();
    CHECK(warrior.hasboolets()==true);
}

TEST_CASE("check Team class")
{
    Point a(32.3,44),b(1.3,3.5);
    Cowboy tom ("Tom",a);
    Team team_a(&tom);
    CHECK(team_a.stillAlive() == true);
}

TEST_CASE("check +")
{
    
}

TEST_CASE("check the function == < <= > >=")
{
    
}

TEST_CASE("check the function + - ++ --")
{
   
}

TEST_CASE("check the function / and *")
{
    
}