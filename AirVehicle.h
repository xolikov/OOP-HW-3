#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include "Vehicle.h"
using namespace std;

class AirVehicle : public Vehicle {
public:
    int maxAltitude;

    AirVehicle(string brand, int year, int maxAltitude) : Vehicle(brand, year), maxAltitude(maxAltitude) {
    }

    string getInfo() override {
        return "AirVehicle class:: Max altitude: " + to_string(maxAltitude) + " meters";
    }
};

#endif
