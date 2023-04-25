#include "midfielder.h"

midfielder::midfielder():player(),passing_rating(),pace_rating(),dribbing_rating(),overall_rating(){}
midfielder::midfielder(string position,string name, unsigned short age, unsigned short jerseyNumber,unsigned short pace_rating
        ,unsigned short passing_rating,unsigned short dribbling_rating) : player(position,name, age, jerseyNumber)
        ,pace_rating(pace_rating)
        ,passing_rating(passing_rating)
        ,dribbing_rating(dribbling_rating)
        ,overall_rating((passing_rating+pace_rating+
                         dribbling_rating)/3){}

midfielder::midfielder(const midfielder &midfielder1) : player(midfielder1),pace_rating(midfielder1.pace_rating)
        ,passing_rating(midfielder1.passing_rating)
        ,dribbing_rating(midfielder1.dribbing_rating)
        ,overall_rating(midfielder1.overall_rating){}
void midfielder::lets_play_message(){
    cout<<getName()<<": I am happy to play in midfield for your team!\n";
}

unsigned short midfielder::getPaceRating() const {
    return pace_rating;
}

unsigned short midfielder::getPassingRating() const {
    return passing_rating;
}

unsigned short midfielder::getOverallRating() const {
    return overall_rating;
}

unsigned short midfielder::getDribbingRating() const {
    return dribbing_rating;
}
