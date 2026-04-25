#ifndef ENERGYTRACKER_H
#define ENERGYTRACKER_H

#include <iostream>
#include <string>
using namespace std;

class EnergyDevice {
private:
    string deviceName;
    int power;
    int hours;

public:
    EnergyDevice();
    EnergyDevice(string, int, int);
    EnergyDevice(const EnergyDevice&);

    void setDevice(string);
    void display();
};

#endif