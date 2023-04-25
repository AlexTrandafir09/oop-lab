//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_CB_H
#define TEMA2_POO_CB_H

#include "defender.h"
#include <iostream>
#include <cstring>
using namespace std;
class CB:public defender {
    string position="CB";
public:
    CB(string name, unsigned short age, unsigned short jersey_number
            ,unsigned short defence_rating,unsigned short physical_rating);
    CB(const CB& CB1);
    virtual void message_for_position();


};
ostream& operator<<(ostream& os,const CB& CB);


#endif //TEMA2_POO_CB_H
