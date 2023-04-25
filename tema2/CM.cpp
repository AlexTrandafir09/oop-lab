#include "CM.h"
CM::CM(string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
        ,unsigned short passing_rating,unsigned short dribbling_rating):midfielder("CM",name,age,jerseyNumber,pace_rating
        ,passing_rating,dribbling_rating){}
CM::CM(const CM& CM1):midfielder(CM1){}
void CM::message_for_position() {
    cout<<"Position: "<<getPosition()<<"\n";
}
ostream& operator<<(ostream& os,const CM& CM) {
    os << "Name: " << CM.getName()<<"\n";
    os<<"Position: "<<CM.getPosition()<<"\n";
    os<<"Age: "<<CM.getAge()<<"\n";
    os<<"Jersey Number: "<<CM.getJerseyNumber()<<"\n";
    os<<"CM Dribbling Rating: "<<CM.getDribbingRating()<<"\n";
    os<<"CM Pace Rating: "<<CM.getPaceRating()<<"\n";
    os<<"CM Passing Rating: "<<CM.getPassingRating()<<"\n";
    os<<"CM Overall Rating: "<<CM.getOverallRating()<<"\n";
    return os;
}