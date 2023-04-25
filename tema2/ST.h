#ifndef TEMA2_POO_ST_H
#define TEMA2_POO_ST_H
#include "attacker.h"
#include <iostream>
#include <cstring>
using namespace std;
class ST:public attacker {
    string position="ST";
public:
    ST(string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
            ,unsigned short passing_rating,unsigned short dribbling_rating);
    ST(const ST& ST1);
    virtual void message_for_position();
};
ostream& operator<<(ostream& os,ST& ST);

#endif //TEMA2_POO_ST_H
