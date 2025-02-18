#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H

#include "Vehicle.h"
using namespace std;

class LandVehicle : public Vehicle {
public:
    int numWheels;

    LandVehicle(string brand, int year, int numWheels) : Vehicle(brand, year), numWheels(numWheels) {
    }

    string getInfo() override {
        return "LandVehicle class:: Number of wheels: " + to_string(numWheels);
    }
};

#endif
