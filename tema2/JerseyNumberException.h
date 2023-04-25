//
// Created by trand on 25.04.2023.
//

#ifndef TEMA2_POO_JERSEYNUMBEREXCEPTION_H
#define TEMA2_POO_JERSEYNUMBEREXCEPTION_H
#include <exception>
using namespace std;
class JerseyNumberException: public exception{
public:
    const char* what() const throw();
};




#endif //TEMA2_POO_JERSEYNUMBEREXCEPTION_H
