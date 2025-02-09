#include "Horse.h"
#include <cstdlib>

Horse::Horse() {
    position = 0;
}

void Horse::advance() {
    if (rand() % 2 == 1) {
        position++;
    }
}

int Horse::getPosition() const {
    return position;
}
