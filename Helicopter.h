#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"
using namespace std;

class Helicopter : public AirVehicle {
public:
    int rotorCount;

    Helicopter(string brand, int year, int maxAltitude, int rotorCount) : AirVehicle(brand, year, maxAltitude),
                                                                          rotorCount(rotorCount) {
    }

    string getInfo() override {
        return "Helicopter class:: Rotor count: " + to_string(rotorCount);
    }
};

#endif
