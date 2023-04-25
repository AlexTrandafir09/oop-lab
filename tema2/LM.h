//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_LM_H
#define TEMA2_POO_LM_H

#include "midfielder.h"
#include <iostream>
#include <cstring>
using namespace std;
class LM:public midfielder {
    string position="LM";
public:
    LM(string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
            ,unsigned short passing_rating,unsigned short dribbling_rating);
    LM(const LM& LM1);
    virtual void message_for_position();


};

ostream& operator<<(ostream& os,const LM& LM);


#endif //TEMA2_POO_LM_H
