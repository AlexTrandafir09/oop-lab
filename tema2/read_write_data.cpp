#include "read_write_data.h"
#include <vector>
using namespace std;
vector<shared_ptr<player>> read_write_data::readAllPlayers() {
    ifstream f("../player_list.txt");
    vector<shared_ptr<player>> all_players;
    string line;
    while (!f.eof()) {
        string position;
        getline(f, line);
        position = line;
        if (position == "GK") {
            string name;
            unsigned short age;
            unsigned short jersey_number;
            unsigned short dive_rating;
            unsigned short kicking_rating;
            unsigned short positioning_rating;
            getline(f, line);
            name = line;
            getline(f, line);
            age = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            jersey_number = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            dive_rating = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            kicking_rating = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            positioning_rating = static_cast<unsigned short>(stoi(line));
            all_players.push_back(
                    make_shared<GK>(GK(name, age, jersey_number, dive_rating, kicking_rating, positioning_rating)));

        }

        if (position == "LB") {
            string name;
            unsigned short age;
            unsigned short jersey_number;
            unsigned short defense_rating;
            unsigned short phyisical_rating;
            getline(f, line);
            name = line;
            getline(f, line);
            age = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            jersey_number = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            defense_rating = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            phyisical_rating = static_cast<unsigned short>(stoi(line));
            all_players.push_back(make_shared<LB>(LB(name, age, jersey_number, defense_rating, phyisical_rating)));
        }

        if(position=="CB"){
            string name;
            unsigned short age;
            unsigned short jersey_number;
            unsigned short defense_rating;
            unsigned short phyisical_rating;
            getline(f, line);
            name = line;
            getline(f, line);
            age = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            jersey_number= static_cast<unsigned short>(stoi(line));
            getline(f, line);
            defense_rating = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            phyisical_rating = static_cast<unsigned short>(stoi(line));
            all_players.push_back(make_shared<CB>(CB(name,age,jersey_number,defense_rating,phyisical_rating)));
        }
        if(position=="RB"){
            string name;
            unsigned short age;
            unsigned short jersey_number;
            unsigned short defense_rating;
            unsigned short phyisical_rating;
            getline(f, line);
            name = line;
            getline(f, line);
            age = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            jersey_number= static_cast<unsigned short>(stoi(line));
            getline(f, line);
            defense_rating = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            phyisical_rating = static_cast<unsigned short>(stoi(line));
            all_players.push_back(make_shared<RB>(RB(name,age,jersey_number,defense_rating,phyisical_rating)));
        }
        if(position=="LM"){
            string name;
            unsigned short age;
            unsigned short jersey_number;
            unsigned short dribbling_rating;
            unsigned short pace_rating;
            unsigned short passing_rating;
            getline(f, line);
            name = line;
            getline(f, line);
            age = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            jersey_number= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            dribbling_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            pace_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            passing_rating= static_cast<unsigned short>(stoi(line));
            all_players.push_back(make_shared<LM>(LM(name,age,jersey_number,pace_rating,passing_rating,dribbling_rating)));
        }
        if(position=="CM"){
            string name;
            unsigned short age;
            unsigned short jersey_number;
            unsigned short dribbling_rating;
            unsigned short pace_rating;
            unsigned short passing_rating;
            getline(f, line);
            name = line;
            getline(f, line);
            age = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            jersey_number= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            dribbling_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            pace_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            passing_rating= static_cast<unsigned short>(stoi(line));
            all_players.push_back(make_shared<CM>(CM(name,age,jersey_number,pace_rating,passing_rating,dribbling_rating)));
        }
        if(position=="RM"){
            string name;
            unsigned short age;
            unsigned short jersey_number;
            unsigned short dribbling_rating;
            unsigned short pace_rating;
            unsigned short passing_rating;
            getline(f, line);
            name = line;
            getline(f, line);
            age = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            jersey_number= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            dribbling_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            pace_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            passing_rating= static_cast<unsigned short>(stoi(line));
            all_players.push_back(make_shared<RM>(RM(name,age,jersey_number,pace_rating,passing_rating,dribbling_rating)));
        }
        if(position=="LW"){
            string name;
            unsigned short age;
            unsigned short jersey_number;
            unsigned short pace_rating;
            unsigned short shooting_rating;
            unsigned short physical_rating;
            getline(f, line);
            name = line;
            getline(f, line);
            age = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            jersey_number= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            pace_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            shooting_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            physical_rating= static_cast<unsigned short>(stoi(line));
            all_players.push_back(make_shared<LW>(LW(name,age,jersey_number,pace_rating,shooting_rating,physical_rating)));
        }
        if(position=="ST"){
            string name;
            unsigned short age;
            unsigned short jersey_number;
            unsigned short pace_rating;
            unsigned short shooting_rating;
            unsigned short physical_rating;
            getline(f, line);
            name = line;
            getline(f, line);
            age = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            jersey_number= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            pace_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            shooting_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            physical_rating= static_cast<unsigned short>(stoi(line));
            all_players.push_back(make_shared<ST>(ST(name,age,jersey_number,pace_rating,shooting_rating,physical_rating)));
        }
        if(position=="RW"){
            string name;
            unsigned short age;
            unsigned short jersey_number;
            unsigned short pace_rating;
            unsigned short shooting_rating;
            unsigned short physical_rating;
            getline(f, line);
            name = line;
            getline(f, line);
            age = static_cast<unsigned short>(stoi(line));
            getline(f, line);
            jersey_number= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            pace_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            shooting_rating= static_cast<unsigned short>(stoi(line));
            getline(f,line);
            physical_rating= static_cast<unsigned short>(stoi(line));
            all_players.push_back(make_shared<RW>(RW(name,age,jersey_number,pace_rating,shooting_rating,physical_rating)));
        }

    }
    return all_players;
}
void read_write_data::printAllPlayers(vector<shared_ptr<player>> vector) {
    for(int i=0;i<vector.size();i++)
        cout<<i+1<<": No. "<<vector[i]->getJerseyNumber()<<", "<<vector[i]->getName()<<", "<<vector[i]->getPosition()<<"\n";
}
vector<shared_ptr<player>> read_write_data::returnPlayersWithSamePosition(vector<shared_ptr<player>> vector1, const string& position) {
    vector<shared_ptr<player>> players_with_same_position;
    for(int i=0;i<vector1.size();i++)
        if(vector1[i]->getPosition()==position)
            players_with_same_position.push_back(vector1[i]);
    return players_with_same_position;
}
vector<shared_ptr<player>> read_write_data::readGamersTeam() {
    vector<shared_ptr<player>> all_players = read_write_data::readAllPlayers();
    vector<shared_ptr<player>> player_team;
    unsigned short formation_pick;
    cout << "1) 4-3-3\n";
    cout << "2) 4-4-2\n";
    cout << "Choose a formation: ";cin >> formation_pick;

    switch (formation_pick) {

        case 1: {
            cout << "Enter the number associated for each of the players you'd like to pick.\n";
            for (short i = 0; i < 11; i++) {
                if (i == 0) {
                    short pick;
                    vector<shared_ptr<player>> GK_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "GK");
                    read_write_data::printAllPlayers(GK_players);
                    cout << " Pick the GK for your team: ";
                    cin >> pick;
                    if (pick > GK_players.size())
                        throw PickException();
                    player_team.push_back(GK_players[pick - 1]);
                    GK_players[pick - 1]->lets_play_message();
                }
                if (i == 1) {
                    short pick;
                    vector<shared_ptr<player>> RB_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "RB");
                    read_write_data::printAllPlayers(RB_players);
                    cout << " Pick the RB for your team: ";
                    cin >> pick;
                    if (pick > RB_players.size())
                        throw PickException();
                    player_team.push_back(RB_players[pick - 1]);
                    RB_players[pick - 1]->lets_play_message();
                }
                if (i == 2) {
                    short pick;
                    vector<shared_ptr<player>> CB_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "CB");
                    read_write_data::printAllPlayers(CB_players);
                    cout << " Pick the first CB for your team: ";
                    cin >> pick;
                    if (pick > CB_players.size())
                        throw PickException();
                    player_team.push_back(CB_players[pick - 1]);
                    CB_players[pick - 1]->lets_play_message();
                }
                if (i == 3) {
                    short pick;
                    vector<shared_ptr<player>> CB_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "CB");
                    read_write_data::printAllPlayers(CB_players);
                    cout << " Pick the second CB for your team: ";
                    cin >> pick;
                    if (pick > CB_players.size())
                        throw PickException();
                    player_team.push_back(CB_players[pick - 1]);
                    CB_players[pick - 1]->lets_play_message();
                }
                if (i == 4) {
                    short pick;
                    vector<shared_ptr<player>> LB_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "LB");
                    read_write_data::printAllPlayers(LB_players);
                    cout << " Pick the LB for your team: ";
                    cin >> pick;
                    if (pick > LB_players.size())
                        throw PickException();
                    player_team.push_back(LB_players[pick - 1]);
                    LB_players[pick - 1]->lets_play_message();
                }
                if (i == 5) {
                    short pick;
                    vector<shared_ptr<player>> CM_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "CM");
                    read_write_data::printAllPlayers(CM_players);
                    cout << " Pick the first CM for your team: ";
                    cin >> pick;
                    if (pick > CM_players.size())
                        throw PickException();
                    player_team.push_back(CM_players[pick - 1]);
                    CM_players[pick - 1]->lets_play_message();
                }
                if (i == 6) {
                    short pick;
                    vector<shared_ptr<player>> CM_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "CM");
                    read_write_data::printAllPlayers(CM_players);
                    cout << " Pick the second CM for your team: ";
                    cin >> pick;
                    if (pick > CM_players.size())
                        throw PickException();
                    player_team.push_back(CM_players[pick - 1]);
                    CM_players[pick - 1]->lets_play_message();
                }

                if (i == 7) {
                    short pick;
                    vector<shared_ptr<player>> CM_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "CM");
                    read_write_data::printAllPlayers(CM_players);
                    cout << " Pick the third CM for your team: ";
                    cin >> pick;
                    if (pick > CM_players.size())
                        throw PickException();
                    player_team.push_back(CM_players[pick - 1]);
                    CM_players[pick - 1]->lets_play_message();
                }
                if (i == 8) {
                    short pick;
                    vector<shared_ptr<player>> RW_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "RW");
                    read_write_data::printAllPlayers(RW_players);
                    cout << " Pick the RW for your team: ";
                    cin >> pick;
                    if (pick > RW_players.size())
                        throw PickException();
                    player_team.push_back(RW_players[pick - 1]);
                    RW_players[pick - 1]->lets_play_message();
                }
                if (i == 9) {
                    short pick;
                    vector<shared_ptr<player>> ST_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "ST");
                    read_write_data::printAllPlayers(ST_players);
                    cout << " Pick the ST for your team: ";
                    cin >> pick;
                    if (pick > ST_players.size())
                        throw PickException();
                    player_team.push_back(ST_players[pick - 1]);
                    ST_players[pick - 1]->lets_play_message();
                }
                if (i == 10) {
                    short pick;
                    vector<shared_ptr<player>> LW_players = read_write_data::returnPlayersWithSamePosition(all_players,
                                                                                                           "LW");
                    read_write_data::printAllPlayers(LW_players);
                    cout << " Pick the LW for your team: ";
                    cin >> pick;
                    if (pick > LW_players.size())
                        throw PickException();
                    player_team.push_back(LW_players[pick - 1]);
                    LW_players[pick - 1]->lets_play_message();
                }
            }
            break;
        }
        case 2: {
            cout << "Enter the number associated for each of the players you'd like to pick.\n";
            for (short i = 0; i < 11; i++) {
                if (i == 0) {
                    short pick;
                    vector<shared_ptr<player>> GK_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "GK");
                    read_write_data::printAllPlayers(GK_players);
                    cout << " Pick the GK for your team: ";
                    cin >> pick;
                    if (pick > GK_players.size())
                        throw PickException();
                    player_team.push_back(GK_players[pick - 1]);
                    GK_players[pick - 1]->lets_play_message();
                }
                if (i == 1) {
                    short pick;
                    vector<shared_ptr<player>> RB_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "RB");
                    read_write_data::printAllPlayers(RB_players);
                    cout << " Pick the RB for your team: ";
                    cin >> pick;
                    if (pick > RB_players.size())
                        throw PickException();
                    player_team.push_back(RB_players[pick - 1]);
                    RB_players[pick - 1]->lets_play_message();
                }
                if (i == 2) {
                    short pick;
                    vector<shared_ptr<player>> CB_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "CB");
                    read_write_data::printAllPlayers(CB_players);
                    cout << " Pick the first CB for your team: ";
                    cin >> pick;
                    if (pick > CB_players.size())
                        throw PickException();
                    player_team.push_back(CB_players[pick - 1]);
                    CB_players[pick - 1]->lets_play_message();
                }
                if (i == 3) {
                    short pick;
                    vector<shared_ptr<player>> CB_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "CB");
                    read_write_data::printAllPlayers(CB_players);
                    cout << " Pick the second CB for your team: ";
                    cin >> pick;
                    if (pick > CB_players.size())
                        throw PickException();
                    player_team.push_back(CB_players[pick - 1]);
                    CB_players[pick - 1]->lets_play_message();
                }
                if (i == 4) {
                    short pick;
                    vector<shared_ptr<player>> LB_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "LB");
                    read_write_data::printAllPlayers(LB_players);
                    cout << " Pick the LB for your team: ";
                    cin >> pick;
                    if (pick > LB_players.size())
                        throw PickException();
                    player_team.push_back(LB_players[pick - 1]);
                    LB_players[pick - 1]->lets_play_message();
                }
                if (i == 5) {
                    short pick;
                    vector<shared_ptr<player>> RM_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "RM");
                    read_write_data::printAllPlayers(RM_players);
                    cout << " Pick the RM for your team: ";
                    cin >> pick;
                    if (pick > RM_players.size())
                        throw PickException();
                    player_team.push_back(RM_players[pick - 1]);
                    RM_players[pick - 1]->lets_play_message();
                }
                if (i == 6) {
                    short pick;
                    vector<shared_ptr<player>> CM_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "CM");
                    read_write_data::printAllPlayers(CM_players);
                    cout << " Pick the first CM for your team: ";
                    cin >> pick;
                    if (pick > CM_players.size())
                        throw PickException();
                    player_team.push_back(CM_players[pick - 1]);
                    CM_players[pick - 1]->lets_play_message();
                }

                if (i == 7) {
                    short pick;
                    vector<shared_ptr<player>> CM_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "CM");
                    read_write_data::printAllPlayers(CM_players);
                    cout << " Pick the second CM for your team: ";
                    cin >> pick;
                    if (pick > CM_players.size())
                        throw PickException();
                    player_team.push_back(CM_players[pick - 1]);
                    CM_players[pick - 1]->lets_play_message();
                }
                if (i == 8) {
                    short pick;
                    vector<shared_ptr<player>> LM_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "LM");
                    read_write_data::printAllPlayers(LM_players);
                    cout << " Pick the LM for your team: ";
                    cin >> pick;
                    if (pick > LM_players.size())
                        throw PickException();
                    player_team.push_back(LM_players[pick - 1]);
                    LM_players[pick - 1]->lets_play_message();
                }
                if (i == 9) {
                    short pick;
                    vector<shared_ptr<player>> ST_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "ST");
                    read_write_data::printAllPlayers(ST_players);
                    cout << " Pick the first ST for your team: ";
                    cin >> pick;
                    if (pick > ST_players.size())
                        throw PickException();
                    player_team.push_back(ST_players[pick - 1]);
                    ST_players[pick - 1]->lets_play_message();
                }
                if (i == 10) {
                    short pick;
                    vector<shared_ptr<player>> ST_players = read_write_data::returnPlayersWithSamePosition(
                            all_players,
                            "ST");
                    read_write_data::printAllPlayers(ST_players);
                    cout << " Pick the first ST for your team: ";
                    cin >> pick;
                    if (pick > ST_players.size())
                        throw PickException();
                    player_team.push_back(ST_players[pick - 1]);
                    ST_players[pick - 1]->lets_play_message();
                }
            }
            break;
        }
        default:{
            cout<<"There isn't any formation associated with the number you introduced.";
            exit(1);
        }

    }
    return player_team;
}