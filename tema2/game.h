//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_GAME_H
#define TEMA2_POO_GAME_H
#include <iostream>
#include <typeinfo>
#include <ctime>
#include <cstdlib>
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
#include "read_write_data.h"
class game {
public:
    static vector<shared_ptr<player>> assembleBarcelona();
    static void match(const vector<shared_ptr<player>>& gamers_team, const vector<shared_ptr<player>>& Barcelona);

};



#endif //TEMA2_POO_GAME_H
