#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H

#include "Vehicle.h"
using namespace std;

class WaterVehicle : public Vehicle {
public:
    string vesselType;

    WaterVehicle(string brand, int year, string vesselType) : Vehicle(brand, year), vesselType(vesselType) {
    }

    string getInfo() override {
        return "WaterVehicle class:: Vessel type: " + vesselType;
    }
};

#endif
