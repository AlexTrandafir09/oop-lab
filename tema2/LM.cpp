#include "LM.h"
LM::LM(string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
        ,unsigned short passing_rating,unsigned short dribbling_rating):midfielder("LM",name,age,jerseyNumber,pace_rating
        ,passing_rating,dribbling_rating){}

LM::LM(const LM& LM1):midfielder(LM1){}
void LM:: message_for_position() {
    cout<<"Position: "<<getPosition()<<"\n";
}
ostream& operator<<(ostream& os,const LM& LM) {
    os << "Name: " << LM.getName()<<"\n";
    os<<"Position: "<<LM.getPosition()<<"\n";
    os<<"Age: "<<LM.getAge()<<"\n";
    os<<"Jersey Number: "<<LM.getJerseyNumber()<<"\n";
    os<<"LM Dribbling Rating: "<<LM.getDribbingRating()<<"\n";
    os<<"LM Pace Rating: "<<LM.getPaceRating()<<"\n";
    os<<"LM Passing Rating: "<<LM.getPassingRating()<<"\n";
    os<<"LM Overall Rating: "<<LM.getOverallRating()<<"\n";
    return os;
}