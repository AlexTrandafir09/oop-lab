//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_LB_H
#define TEMA2_POO_LB_H
#include <iostream>
#include <cstring>
using namespace std;
#include "defender.h"
class LB: public defender{
    string position="LB";
public:
    LB(string name, unsigned short age, unsigned short jersey_number
            ,unsigned short defence_rating,unsigned short physical_rating);

    LB(const LB &LB1);

    virtual void message_for_position();


};
ostream& operator<<(ostream& os,const LB& LB);


#endif //TEMA2_POO_LB_H
