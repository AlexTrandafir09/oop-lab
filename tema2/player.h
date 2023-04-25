//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_PLAYER_H
#define TEMA2_POO_PLAYER_H


#include <cstring>
#include <iostream>
#include <vector>
#include <memory>
#include "JerseyNumberException.h"
using namespace std;
class player {
    string position;
    string name;
    unsigned short age;
    unsigned short jersey_number;
public:
    player();
    player(string position,string name,unsigned short age,unsigned short jersey_number);
    player(const player& player);

    string getName() const;

    virtual void lets_play_message()=0;

    string getPosition() const;

    unsigned short getAge() const;

    unsigned short getJerseyNumber() const;

    static void checkNumbers(const vector<shared_ptr<player>> players);

};

#endif //TEMA2_POO_PLAYER_H
