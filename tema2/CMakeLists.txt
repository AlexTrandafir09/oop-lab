cmake_minimum_required(VERSION 3.24)
project(tema2_poo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tema2_poo
        attacker.cpp
        attacker.h
        main.cpp player.cpp defender.h defender.cpp GK.h GK.cpp midfielder.h midfielder.cpp CB.h CB.cpp CM.h CM.cpp LB.h LB.cpp LM.h LM.cpp LW.h LW.cpp RB.h RB.cpp RM.h RM.cpp RW.h RW.cpp ST.h ST.cpp read_write_data.cpp JerseyNumberException.cpp game.cpp PickException.cpp)
