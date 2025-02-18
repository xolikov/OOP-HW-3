#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
public:
    string brand;
    int year;

    Vehicle(string brand, int year) : brand(brand), year(year) {
    }

    virtual ~Vehicle() {
    }

    virtual string getInfo() = 0;
};

string Vehicle::getInfo() {
    return "Vehicle class:: Brand: " + brand + "\nVehicle class:: Year: " + to_string(year);
}

#endif
