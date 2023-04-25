#include "RB.h"
RB::RB(string name, unsigned short age, unsigned short jersey_number
        ,unsigned short defence_rating,unsigned short physical_rating):defender("RB",name,age,jersey_number,defence_rating
        ,physical_rating){}
void RB::message_for_position(){
    cout<<"Position: "<<getPosition()<<"\n";
}

RB::RB(const RB &RB1) : defender(RB1) {}


ostream& operator<<(ostream& os,const RB& RB) {
    os << "Name: " << RB.getName()<<"\n";
    os<<"Position: "<<RB.getPosition()<<"\n";
    os<<"Age: "<<RB.getAge()<<"\n";
    os<<"Jersey Number: "<<RB.getJerseyNumber()<<"\n";
    os<<"RB Defense Rating: "<<RB.getDefenceRating()<<"\n";
    os<<"RB Physical Rating: "<<RB.getPhysicalRating()<<"\n";
    os<<"RB Overall Rating: "<<RB.getOverallRating()<<"\n";
    return os;
}
