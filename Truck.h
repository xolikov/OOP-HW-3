#ifndef TRUCK_H
#define TRUCK_H

#include "LandVehicle.h"
using namespace std;

class Truck : public LandVehicle {
public:
    double loadCapacity;

    Truck(string brand, int year, int numWheels, double loadCapacity) : LandVehicle(brand, year, numWheels),
                                                                        loadCapacity(loadCapacity) {
    }

    string getInfo() override {
        return "Truck class:: Load capacity: " + to_string(loadCapacity) + " tons";
    }
};

#endif
