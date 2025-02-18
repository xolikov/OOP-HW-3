#ifndef CAR_H
#define CAR_H

#include "LandVehicle.h"
using namespace std;

class Car : public LandVehicle {
public:
    int numDoors;

    Car(string brand, int year, int numWheels, int numDoors) : LandVehicle(brand, year, numWheels), numDoors(numDoors) {
    }

    string getInfo() override {
        return "Car class:: Number of doors: " + to_string(numDoors);
    }
};

#endif
