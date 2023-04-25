#ifndef TEMA2_POO_ATTACKER_H
#define TEMA2_POO_ATTACKER_H
#include "player.h"
#include <iostream>
using namespace std;
class attacker: public player{
    unsigned short pace_rating;
    unsigned short shooting_rating;
    unsigned short phyisical_rating;
    unsigned short overall_rating;
public:
    attacker();
    attacker(string position,string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
            ,unsigned short shooting_rating,unsigned short physical_rating);
    attacker(const attacker& attacker1);
    void lets_play_message() override;

    unsigned short getPaceRating() const;

    unsigned short getShootingRating() const;

    unsigned short getOverallRating() const;

    unsigned short getPhyisicalRating() const;

};


#endif
