#include "JerseyNumberException.h"
const char *JerseyNumberException::what() const throw() {
    return "You picked the same player twice. \n";
}