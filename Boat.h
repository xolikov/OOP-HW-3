#ifndef BOAT_H
#define BOAT_H

#include "WaterVehicle.h"
using namespace std;

class Boat : public WaterVehicle {
public:
    double length;

    Boat(string brand, int year, string vesselType, double length) : WaterVehicle(brand, year, vesselType),
                                                                     length(length) {
    }

    string getInfo() override {
        return "Boat class:: Length: " + to_string(length) + " meters";
    }
};

#endif
