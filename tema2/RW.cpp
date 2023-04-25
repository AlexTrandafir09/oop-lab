#include "RW.h"
RW::RW(string name, unsigned short age, unsigned short jerseyNumber, unsigned short pace_rating
        , unsigned short passing_rating, unsigned short dribbling_rating):attacker("RW",name,age,jerseyNumber,pace_rating
        ,passing_rating,dribbling_rating){}

RW::RW(const RW& RW1): attacker(RW1){}
void RW:: message_for_position() {
    cout<<"Position: "<<getPosition()<<"\n";
}
ostream& operator<<(ostream& os,RW& RW){
    os << "Name: " << RW.getName()<<"\n";
    os<<"Position: "<<RW.getPosition()<<"\n";
    os<<"Age: "<<RW.getAge()<<"\n";
    os<<"Jersey Number: "<<RW.getJerseyNumber()<<"\n";
    os<<"RW Pace Rating: "<<RW.getPaceRating()<<"\n";
    os<<"RW Physical Rating: "<<RW.getPhyisicalRating()<<"\n";
    os<<"RW Shooting Rating: "<<RW.getShootingRating()<<"\n";
    os<<"RW Overall Rating: "<<RW.getOverallRating()<<"\n";
    return os;
}
