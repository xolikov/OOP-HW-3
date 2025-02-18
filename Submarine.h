#ifndef SUBMARINE_H
#define SUBMARINE_H

#include "WaterVehicle.h"
using namespace std;

class Submarine : public WaterVehicle {
public:
    int maxDepth;

    Submarine(string brand, int year, string vesselType, int maxDepth) : WaterVehicle(brand, year, vesselType),
                                                                         maxDepth(maxDepth) {
    }

    string getInfo() override {
        return "Submarine class:: Max depth: " + to_string(maxDepth) + " meters";
    }
};

#endif
