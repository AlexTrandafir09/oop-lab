#include "CB.h"
#include "defender.h"
CB::CB(string name, unsigned short age, unsigned short jersey_number
        ,unsigned short defence_rating,unsigned short physical_rating):defender("CB",name,age,jersey_number,defence_rating,physical_rating){}
CB::CB(const CB& CB1): defender(CB1){}
void CB::message_for_position() {
    cout<<"Position: "<<getPosition()<<"\n";
}
ostream& operator<<(ostream& os,const CB& CB) {
    os << "Name: " << CB.getName()<<"\n";
    os<<"Position: "<<CB.getPosition()<<"\n";
    os<<"Age: "<<CB.getAge()<<"\n";
    os<<"Jersey Number: "<<CB.getJerseyNumber()<<"\n";
    os<<"CB Defense Rating: "<<CB.getDefenceRating()<<"\n";
    os<<"CB Physical Rating: "<<CB.getPhysicalRating()<<"\n";
    os<<"CB Overall Rating: "<<CB.getOverallRating()<<"\n";
    return os;
}