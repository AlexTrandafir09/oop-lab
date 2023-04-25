//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_CM_H
#define TEMA2_POO_CM_H
#include "midfielder.h"
#include <iostream>
using namespace std;
class CM:public midfielder {
    string position="CM";
public:
    CM(string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
            ,unsigned short passing_rating,unsigned short dribbling_rating);
    CM(const CM& CM1);
    virtual void message_for_position();
};
ostream& operator<<(ostream& os,const CM& CM);



#endif //TEMA2_POO_CM_H
