//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_MIDFIELDER_H
#define TEMA2_POO_MIDFIELDER_H
#include "player.h"
#include <iostream>
#include <cstring>
using namespace std;
class midfielder: public player{
    unsigned short pace_rating;
    unsigned short passing_rating;
    unsigned short dribbing_rating;
    unsigned short overall_rating;
public:
    midfielder();

    midfielder(string position,string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
            ,unsigned short passing_rating,unsigned short dribbling_rating);

    midfielder(const midfielder &midfielder1);

    void lets_play_message() override;

    unsigned short getPaceRating() const;

    unsigned short getPassingRating() const;

    unsigned short getOverallRating() const;

    unsigned short getDribbingRating() const;


};



#endif //TEMA2_POO_MIDFIELDER_H
