#include "GK.h"
GK::GK():player(), dive_rating(), kicking_rating(), positioning_rating(), overall_rating() {}
GK::GK(string name, unsigned short age, unsigned short jersey_number
        , unsigned short dive_rating, unsigned short kicking_rating, unsigned short positioning_rating)
        :player("GK",name,age,jersey_number),dive_rating(dive_rating),kicking_rating(kicking_rating)
        ,positioning_rating(positioning_rating),overall_rating((dive_rating+kicking_rating+positioning_rating)/3){}
GK::GK(const GK &goalkeeper1): player(goalkeeper1), dive_rating(goalkeeper1.dive_rating)
        , positioning_rating(goalkeeper1.positioning_rating)
        , kicking_rating(goalkeeper1.kicking_rating)
        , overall_rating(goalkeeper1.overall_rating){}
void GK::lets_play_message(){
    cout<<getName()<<": I am happy to be a GK for your team!\n";

}

unsigned short GK::getDiveRating() const {
    return dive_rating;
}

unsigned short GK::getKickingRating() const {
    return kicking_rating;
}

unsigned short GK::getPositioningRating() const {
    return positioning_rating;
}

unsigned short GK::getOverallRating() const {
    return overall_rating;
}

ostream& operator<<(ostream& os,const GK& goalkeeper1) {
    os << "Name: " << goalkeeper1.getName()<<"\n";
    os<<"Position: "<<goalkeeper1.getPosition()<<"\n";
    os<<"Age: "<<goalkeeper1.getAge()<<"\n";
    os<<"Jersey Number: "<<goalkeeper1.getJerseyNumber()<<"\n";
    os<<"GK Dive Rating: "<<goalkeeper1.getDiveRating()<<"\n";
    os<<"GK Kicking Rating: "<<goalkeeper1.getKickingRating()<<"\n";
    os<<"GK Positioning Rating: "<<goalkeeper1.getPositioningRating()<<"\n";
    os<<"GK Overall Rating: "<<goalkeeper1.getOverallRating()<<"\n";
    return os;
}