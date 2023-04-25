#include "player.h"
#include <iostream>

using namespace std;
player::player() {
    position= nullptr;
    name= nullptr;
    age=0;
    jersey_number=0;
}
player::player(string position_,string name_, unsigned short age_,unsigned short jersey_number_) {
    name = name_;
    position=position_;
    age=age_;
    jersey_number=jersey_number_;
}

player::player(const player &player1) {
    name=player1.name;
    position=player1.position;
    jersey_number = player1.jersey_number;
    age=player1.age;
}

string player::getName() const {
    return name;
}

string player::getPosition() const {
    return position;
}

unsigned short player::getAge() const {
    return age;
}

unsigned short player::getJerseyNumber() const {
    return jersey_number;
}

void player::checkNumbers(const vector<shared_ptr<player>> players) {
    for (short i = 0; i < players.size() - 1; i++)
        for (short j = i+1; j < players.size(); j++)
            if (players[i]->getJerseyNumber() == players[j]->getJerseyNumber())
                throw JerseyNumberException();

}