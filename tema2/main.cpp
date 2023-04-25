#include <vector>
#include <memory>
#include <iostream>
#include "read_write_data.h"
#include "game.h"
#include "player.h"
using namespace std;
int main() {
    vector<shared_ptr<player>> all_players= read_write_data::readAllPlayers();
    vector<shared_ptr<player>> Barcelona = game::assembleBarcelona();
    try{
        player::checkNumbers(Barcelona);
        try{
            vector<shared_ptr<player>> player_team=read_write_data::readGamersTeam();
            player::checkNumbers(player_team);
            player::checkNumbers(player_team);
            cout<<"Your squad\n";
            read_write_data::printAllPlayers(player_team);
            cout<<"Barcelona\n";
            read_write_data::printAllPlayers(Barcelona);
            game::match(player_team,Barcelona);
        }
        catch (exception& f){
            cout<<"Exception: "<<f.what()<<endl;
        }
    }
    catch (exception &e){
        cout<<"Exception: "<<e.what()<<endl;
    }
    return 0;
}
