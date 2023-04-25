#include "defender.h"

defender::defender():player(),defence_rating(),physical_rating(),overall_rating() {}
defender::defender(string position,string name, unsigned short age, unsigned short jersey_number
        ,unsigned short defence_rating,unsigned short physical_rating):
        defence_rating(defence_rating),physical_rating(physical_rating)
        ,player(position,name,age,jersey_number)
        ,overall_rating((defence_rating+physical_rating)/2) {}
defender::defender(const defender& defender1):player(defender1)
        ,defence_rating(defender1.defence_rating)
        ,physical_rating(defender1.physical_rating)
        ,overall_rating((defender1.physical_rating+defender1.defence_rating)/2){}

unsigned short defender::getOverallRating() const {
    return overall_rating;
}

unsigned short defender::getDefenceRating() const {
    return defence_rating;
}

unsigned short defender::getPhysicalRating() const {
    return physical_rating;
}

void defender::lets_play_message(){
    cout<<getName()<<": I am happy to play in defense for your team!\n";
}
