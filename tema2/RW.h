//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_RW_H
#define TEMA2_POO_RW_H
#include "attacker.h"
#include <iostream>
#include <cstring>
using namespace std;
class RW:public attacker {
    string position="RW";
public:
    RW(string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
            ,unsigned short passing_rating,unsigned short dribbling_rating);
    RW(const RW& RW1);
    virtual void message_for_position();
};
ostream& operator<<(ostream& os,RW& RW);


#endif //TEMA2_POO_RW_H
