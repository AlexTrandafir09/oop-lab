//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_RM_H
#define TEMA2_POO_RM_H

#include "midfielder.h"
#include <iostream>
#include <cstring>
using namespace std;
class RM:public midfielder {
    string position="RM";
public:
    RM(string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
            ,unsigned short passing_rating,unsigned short dribbling_rating);
    RM(const RM& RM1);
    virtual void message_for_position();
};
ostream& operator<<(ostream& os,const RM& RM);
#endif //TEMA2_POO_RM_H
