#include "Race.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Race::Race() {
    srand(time(0));
}

void Race::printRace() const {
    for (int i = 0; i < NUM_HORSES; i++) {
        for (int j = 0; j < TRACK_LENGTH; j++) {
            if (j == horses[i].getPosition()) {
                cout << i;
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}

bool Race::checkWinner() const {
    for (int i = 0; i < NUM_HORSES; i++) {
        if (horses[i].getPosition() >= TRACK_LENGTH - 1) {
            cout << "Horse " << i << " WINS!\n";
            return true;
        }
    }
    return false;
}

void Race::start() {
    cin.get();

    bool raceOver = false;
    while (!raceOver) {
        system("clear");

        for (int i = 0; i < NUM_HORSES; i++) {
            horses[i].advance();
        }

        printRace();
        raceOver = checkWinner();

        if (!raceOver) {
            cin.get();
        }
    }
}
