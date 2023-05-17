#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"
#include "Cowboy.hpp"

using namespace std;
namespace ariel
{
}
    class Team
    {
    private:
        vector<Character*> army;

    public:
        // Team(vector<Character*> army);
        // Team(Team &Team);
        Team(Character *leader);
        Team();
        void add(Character* Character);
        void attack(Team* otherTeam);
        int stillAlive();
        string print();
    };
