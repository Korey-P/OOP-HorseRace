#ifndef RACE_H
#define RACE_H

#include "Horse.h"
#include <iostream>

class Race {
private:
    static const int NUM_HORSES = 5;
    static const int TRACK_LENGTH = 15;
    Horse horses[NUM_HORSES];

public:
    Race();
    void start();
    void printRace() const;
    bool checkWinner() const;
};

#endif
