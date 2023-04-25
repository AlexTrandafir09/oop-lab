#include "ST.h"
ST::ST(string name, unsigned short age, unsigned short jerseyNumber, unsigned short pace_rating
        , unsigned short passing_rating, unsigned short dribbling_rating):attacker("ST",name,age,jerseyNumber,pace_rating
        ,passing_rating,dribbling_rating){}

ST::ST(const ST& ST1): attacker(ST1){}
void ST:: message_for_position() {
    cout<<"Position: "<<getPosition()<<"\n";
}
ostream& operator<<(ostream& os,ST& ST){
    os << "Name: " << ST.getName()<<"\n";
    os<<"Position: "<<ST.getPosition()<<"\n";
    os<<"Age: "<<ST.getAge()<<"\n";
    os<<"Jersey Number: "<<ST.getJerseyNumber()<<"\n";
    os<<"ST Pace Rating: "<<ST.getPaceRating()<<"\n";
    os<<"ST Physical Rating: "<<ST.getPhyisicalRating()<<"\n";
    os<<"ST Shooting Rating: "<<ST.getShootingRating()<<"\n";
    os<<"ST Overall Rating: "<<ST.getOverallRating()<<"\n";
    return os;
}