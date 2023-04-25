//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_GK_H
#define TEMA2_POO_GK_H


#include "player.h"
#include <iostream>
#include <cstring>
using namespace std;
class GK: public player {
    unsigned short dive_rating;
    unsigned short kicking_rating;
    unsigned short positioning_rating;
    unsigned short overall_rating;
public:
    GK();
    GK(string name, unsigned short age, unsigned short jersey_number
            , unsigned short dive_rating, unsigned short kicking_rating, unsigned short positioning_rating);
    GK(const GK& goalkeeper1);
    void lets_play_message() override;



    unsigned short getDiveRating() const;

    unsigned short getKickingRating() const;

    unsigned short getPositioningRating() const;

    unsigned short getOverallRating() const;

};

ostream& operator<<(ostream& os,const GK& goalkeeper1);;


#endif //TEMA2_POO_GK_H
