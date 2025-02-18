#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"
using namespace std;

class SportsCar : public Car {
public:
    int maxSpeed;

    SportsCar(string brand, int year, int numWheels, int numDoors,
              int maxSpeed) : Car(brand, year, numWheels, numDoors), maxSpeed(maxSpeed) {
    }

    string getInfo() override {
        return "SportsCar class:: Max speed: " + to_string(maxSpeed) + " km/h";
    }
};

#endif
