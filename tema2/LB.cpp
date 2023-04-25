#include "LB.h"
LB::LB(string name, unsigned short age, unsigned short jersey_number
        ,unsigned short defence_rating,unsigned short physical_rating):defender("LB",name,age,jersey_number,defence_rating
        ,physical_rating){}
void LB::message_for_position(){
    cout<<"Position: "<<getPosition()<<"\n";
}

LB::LB(const LB &LB1) : defender(LB1) {}



ostream& operator<<(ostream& os,const LB& LB) {
    os << "Name: " << LB.getName()<<"\n";
    os<<"Position: "<<LB.getPosition()<<"\n";
    os<<"Age: "<<LB.getAge()<<"\n";
    os<<"Jersey Number: "<<LB.getJerseyNumber()<<"\n";
    os<<"LB Defense Rating: "<<LB.getDefenceRating()<<"\n";
    os<<"LB Physical Rating: "<<LB.getPhysicalRating()<<"\n";
    os<<"LB Overall Rating: "<<LB.getOverallRating()<<"\n";
    return os;
}
