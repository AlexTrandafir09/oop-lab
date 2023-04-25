//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_PICKEXCEPTION_H
#define TEMA2_POO_PICKEXCEPTION_H

#include <vector>
#include <memory>
#include <exception>
using namespace std;
class PickException: public exception{
public:
    const char* what() const throw();
};



#endif //TEMA2_POO_PICKEXCEPTION_H
