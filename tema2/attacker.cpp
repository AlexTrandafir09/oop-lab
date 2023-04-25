#include "attacker.h"
attacker::attacker():player(),pace_rating(),shooting_rating(),phyisical_rating(),overall_rating(){}
attacker::attacker(string position,string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
        ,unsigned short shooting_rating,unsigned short physical_rating):player(position,name,age,jerseyNumber)
        ,pace_rating(pace_rating),shooting_rating(shooting_rating),phyisical_rating(physical_rating)
        ,overall_rating((physical_rating+pace_rating+shooting_rating)/3){}
attacker::attacker(const attacker &attacker1):player(attacker1),pace_rating(attacker1.pace_rating)
        ,shooting_rating(attacker1.shooting_rating),phyisical_rating(attacker1.phyisical_rating)
        ,overall_rating(attacker1.overall_rating){}
void attacker::lets_play_message(){
    cout<<getName()<<": I am happy to play in attack for your team!\n";
}

unsigned short attacker::getPaceRating() const {
    return pace_rating;
}

unsigned short attacker::getShootingRating() const {
    return shooting_rating;
}

unsigned short attacker::getOverallRating() const {
    return overall_rating;
}

unsigned short attacker::getPhyisicalRating() const {
    return phyisical_rating;
}
