//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_RB_H
#define TEMA2_POO_RB_H
#include <iostream>
#include <cstring>
using namespace std;
#include "defender.h"
class RB: public defender{
    string position="RB";
public:
    RB(string name, unsigned short age, unsigned short jersey_number
            ,unsigned short defence_rating,unsigned short physical_rating);

    RB(const RB &RB1);

    virtual void message_for_position();

};
ostream& operator<<(ostream& os,const RB& RB);


#endif //TEMA2_POO_RB_H
