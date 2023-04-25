#include "LW.h"
LW::LW(string name, unsigned short age, unsigned short jerseyNumber, unsigned short pace_rating
        , unsigned short passing_rating, unsigned short physical_rating):attacker("LW",name,age,jerseyNumber,pace_rating
        ,passing_rating,physical_rating){}

LW::LW(const LW& LW1): attacker(LW1){}
void LW:: message_for_position() {
    cout<<"Position: "<<getPosition()<<"\n";
}
ostream& operator<<(ostream& os,LW& LW){
    os << "Name: " << LW.getName()<<"\n";
    os<<"Position: "<<LW.getPosition()<<"\n";
    os<<"Age: "<<LW.getAge()<<"\n";
    os<<"Jersey Number: "<<LW.getJerseyNumber()<<"\n";
    os<<"LW Pace Rating: "<<LW.getPaceRating()<<"\n";
    os<<"LW Physical Rating: "<<LW.getPhyisicalRating()<<"\n";
    os<<"LW Shooting Rating: "<<LW.getShootingRating()<<"\n";
    os<<"LW Overall Rating: "<<LW.getOverallRating()<<"\n";
    return os;
}