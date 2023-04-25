#include "game.h"
vector<shared_ptr<player>> game::assembleBarcelona() {
    vector<shared_ptr<player>> Barcelona;
    Barcelona.push_back(make_shared<GK>(GK("Andre ter Stegen",27,1,88,88,87)));
    Barcelona.push_back(make_shared<RB>(RB("Sergi Roberto",27,20,82,78)));
    Barcelona.push_back(make_shared<CB>(CB("Gerard Pique",32,3,87,76)));
    Barcelona.push_back(make_shared<CB>(CB("Clement Langlet",24,15,84,81)));
    Barcelona.push_back(make_shared<LB>(LB("Jordi Alba",30,18,81,90)));
    Barcelona.push_back(make_shared<CM>(CM("Sergio Busquets",31,5,68,79,75)));
    Barcelona.push_back(make_shared<CM>(CM("Ivan Rakitic",31,4,73,87,84)));
    Barcelona.push_back(make_shared<CM>(CM("Arthur",23,8,72,81,85)));
    Barcelona.push_back(make_shared<RW>(RW("Lionel Messi",33,10,91,90,97)));
    Barcelona.push_back(make_shared<ST>(ST("Luis Suarez",32,9,85,79,87)));
    Barcelona.push_back(make_shared<LW>(LW("Coutinho",27,7,87,82,97)));
    return Barcelona;
}
void game::match(const vector<shared_ptr<player>>& gamers_team, const vector<shared_ptr<player>>& Barcelona) {
    float gamers_team_overall_rating,Barcelona_overall_rating;
    if(gamers_team[5]->getPosition()=="CM") {
        shared_ptr<GK> pointerGK = dynamic_pointer_cast<GK>(gamers_team[0]);
        shared_ptr<RB> pointerRB = dynamic_pointer_cast<RB>(gamers_team[1]);
        shared_ptr<CB> pointerCB1 = dynamic_pointer_cast<CB>(gamers_team[2]);
        shared_ptr<CB> pointerCB2 = dynamic_pointer_cast<CB>(gamers_team[3]);
        shared_ptr<LB> pointerLB = dynamic_pointer_cast<LB>(gamers_team[4]);
        shared_ptr<CM> pointerCM1 = dynamic_pointer_cast<CM>(gamers_team[5]);
        shared_ptr<CM> pointerCM2 = dynamic_pointer_cast<CM>(gamers_team[6]);
        shared_ptr<CM> pointerCM3 = dynamic_pointer_cast<CM>(gamers_team[7]);
        shared_ptr<RW> pointerRW = dynamic_pointer_cast<RW>(gamers_team[8]);
        shared_ptr<ST> pointerST = dynamic_pointer_cast<ST>(gamers_team[9]);
        shared_ptr<LW> pointerLW = dynamic_pointer_cast<LW>(gamers_team[10]);
        gamers_team_overall_rating=float(pointerCB1->getOverallRating()+pointerCB2->getOverallRating()
                                         +pointerCM1->getOverallRating()+pointerCM2->getOverallRating()+pointerCM3->getOverallRating()
                                         +pointerGK->getOverallRating()+pointerLB->getOverallRating()+pointerLW->getOverallRating()
                                         +pointerST->getOverallRating()+pointerRB->getOverallRating()+pointerRW->getOverallRating())/11;
    }
    else {
        shared_ptr<GK> pointerGK = dynamic_pointer_cast<GK>(gamers_team[0]);
        shared_ptr<RB> pointerRB = dynamic_pointer_cast<RB>(gamers_team[1]);
        shared_ptr<CB> pointerCB1 = dynamic_pointer_cast<CB>(gamers_team[2]);
        shared_ptr<CB> pointerCB2 = dynamic_pointer_cast<CB>(gamers_team[3]);
        shared_ptr<LB> pointerLB = dynamic_pointer_cast<LB>(gamers_team[4]);
        shared_ptr<RM> pointerRM = dynamic_pointer_cast<RM>(gamers_team[5]);
        shared_ptr<CM> pointerCM1 = dynamic_pointer_cast<CM>(gamers_team[6]);
        shared_ptr<CM> pointerCM2 = dynamic_pointer_cast<CM>(gamers_team[7]);
        shared_ptr<LM> pointerLM = dynamic_pointer_cast<LM>(gamers_team[8]);
        shared_ptr<ST> pointerST1 = dynamic_pointer_cast<ST>(gamers_team[9]);
        shared_ptr<ST> pointerST2 = dynamic_pointer_cast<ST>(gamers_team[10]);
        gamers_team_overall_rating=float(pointerCB1->getOverallRating()+pointerCB2->getOverallRating()
                                         +pointerCM1->getOverallRating()+pointerCM2->getOverallRating()+pointerLM->getOverallRating()
                                         +pointerGK->getOverallRating()+pointerLB->getOverallRating()+pointerRM->getOverallRating()
                                         +pointerST1->getOverallRating()+pointerRB->getOverallRating()+pointerST2->getOverallRating())/11;
    }


    shared_ptr<GK> pointerGK_= dynamic_pointer_cast<GK>(Barcelona[0]);
    shared_ptr<RB> pointerRB_= dynamic_pointer_cast<RB>(Barcelona[1]);
    shared_ptr<CB> pointerCB1_= dynamic_pointer_cast<CB>(Barcelona[2]);
    shared_ptr<CB> pointerCB2_= dynamic_pointer_cast<CB>(Barcelona[3]);
    shared_ptr<LB> pointerLB_= dynamic_pointer_cast<LB>(Barcelona[4]);
    shared_ptr<CM> pointerCM1_= dynamic_pointer_cast<CM>(Barcelona[5]);
    shared_ptr<CM> pointerCM2_= dynamic_pointer_cast<CM>(Barcelona[6]);
    shared_ptr<CM> pointerCM3_= dynamic_pointer_cast<CM>(Barcelona[7]);
    shared_ptr<RW> pointerRW_= dynamic_pointer_cast<RW>(Barcelona[8]);
    shared_ptr<ST> pointerST_= dynamic_pointer_cast<ST>(Barcelona[9]);
    shared_ptr<LW> pointerLW_= dynamic_pointer_cast<LW>(Barcelona[10]);

    Barcelona_overall_rating=float(pointerCB1_->getOverallRating()+pointerCB2_->getOverallRating()
                                   +pointerCM1_->getOverallRating()+pointerCM2_->getOverallRating()+pointerCM3_->getOverallRating()
                                   +pointerGK_->getOverallRating()+pointerLB_->getOverallRating()+pointerLW_->getOverallRating()
                                   +pointerST_->getOverallRating()+pointerRB_->getOverallRating()+pointerRW_->getOverallRating())/11;

    bool picked_weather,picked_stadium;
    srand(time(nullptr));
    picked_stadium=rand()%2;///0-home,1-away
    picked_weather=rand()%2;///0-sunny(bonus for home team),1-not sunny(bonus for away team)
    if(picked_stadium==0) {
        cout<<"You are playing on your team's stadium, ";
        if (picked_weather == 0) {
            cout << "and the weather is good.\n";
            gamers_team_overall_rating += 2;
        }
        else {Barcelona_overall_rating += 2;cout<<" and the weather is bad.\n";}
    }
    if(picked_stadium==1) {
        cout<<"You are playing on Barcelona's stadium, ";
        if (picked_weather == 0) {
            cout<<"and the weather is good.\n";
            Barcelona_overall_rating += 2;
        }
        else {gamers_team_overall_rating += 2;cout<<"and the weather is not good.\n";}
    }
    if (gamers_team_overall_rating>Barcelona_overall_rating) {
        short score1, score2;
        score1 = rand() % 5;
        score2 = rand() % score1;
        cout << "Your team won! Score: " << score1 << " - " << score2;
    }
    if (gamers_team_overall_rating==Barcelona_overall_rating) {
        short score1;
        score1 = rand() % 5;
        cout << "Your team drew. Score: " << score1 << " - " << score1;
    }
    if (gamers_team_overall_rating<Barcelona_overall_rating) {
        short score1, score2;
        score2 = rand() % 5;
        score1 = rand() % score2;
        cout << "Your team lost. Score: " << score1 << " - " << score2;
    }

}