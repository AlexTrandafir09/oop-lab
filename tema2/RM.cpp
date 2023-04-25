#include "RM.h"
RM::RM(string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
        ,unsigned short passing_rating,unsigned short dribbling_rating):midfielder("RM",name,age,jerseyNumber,pace_rating,
                                                                                   passing_rating,dribbling_rating){}
RM::RM(const RM& RM1): midfielder(RM1){}
void RM::message_for_position() {
    cout<<"Position: "<<getPosition()<<"\n";
}
ostream& operator<<(ostream& os,const RM& RM) {
    os << "Name: " << RM.getName()<<"\n";
    os<<"Position: "<<RM.getPosition()<<"\n";
    os<<"Age: "<<RM.getAge()<<"\n";
    os<<"Jersey Number: "<<RM.getJerseyNumber()<<"\n";
    os<<"RM Dribbling Rating: "<<RM.getDribbingRating()<<"\n";
    os<<"RM Pace Rating: "<<RM.getPaceRating()<<"\n";
    os<<"RM Passing Rating: "<<RM.getPassingRating()<<"\n";
    os<<"RM Overall Rating: "<<RM.getOverallRating()<<"\n";
    return os;
}