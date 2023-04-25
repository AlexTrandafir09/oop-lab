#include "PickException.h"
const char *PickException::what() const throw() {
    return "You entered a number that isn't associated to any of the players in the list. \n";
}