//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_READ_WRITE_DATA_H
#define TEMA2_POO_READ_WRITE_DATA_H
#include <iostream>
#include <cstring>
#include <vector>
#include <memory>
#include <fstream>
#include "player.h"
#include "GK.h"
#include "defender.h"
#include "midfielder.h"
#include "attacker.h"
#include "LB.h"
#include "RB.h"
#include "CB.h"
#include "CM.h"
#include "RM.h"
#include "LM.h"
#include "RW.h"
#include "ST.h"
#include "LW.h"
#include "PickException.h"
#include "JerseyNumberException.h"
using namespace std;
class read_write_data {
public:
    static vector<shared_ptr<player>> readAllPlayers();
    static void printAllPlayers(vector<shared_ptr<player>> vector);
    static vector<shared_ptr<player>> returnPlayersWithSamePosition(vector<shared_ptr<player>> vector1, const string& position);
    static vector<shared_ptr<player>> readGamersTeam();
};



#endif //TEMA2_POO_READ_WRITE_DATA_H
