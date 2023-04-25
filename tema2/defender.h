//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_DEFENDER_H
#define TEMA2_POO_DEFENDER_H


#include "player.h"
#include <iostream>
#include <cstring>
using namespace std;
class defender: public player{
    unsigned short defence_rating;
    unsigned short physical_rating;
    unsigned short overall_rating;
public:
    defender();
    defender(string position,string name,unsigned short age,unsigned short jersey_number,unsigned short defence_rating,unsigned short physical_rating);
    defender(const defender& defender1);

    unsigned short getOverallRating() const;
    void lets_play_message() override;

    unsigned short getDefenceRating() const;

    unsigned short getPhysicalRating() const;

};



#endif //TEMA2_POO_DEFENDER_H
