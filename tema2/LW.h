//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_LW_H
#define TEMA2_POO_LW_H

#include "attacker.h"
#include <iostream>
#include <cstring>
using namespace std;
class LW:public attacker {
    string position="LW";
public:
    LW(string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
            ,unsigned short physical_rating,unsigned short dribbling_rating);
    LW(const LW& LW1);
    virtual void message_for_position();


};
ostream& operator<<(ostream& os,LW& LW);

#endif //TEMA2_POO_LW_H
