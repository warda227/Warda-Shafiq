#include "EnergyTracker.h"

EnergyDevice::EnergyDevice() {
    deviceName = "";
    power = 0;
    hours = 0;
}

EnergyDevice::EnergyDevice(string name, int p, int h) {
    deviceName = name;
    power = p;
    hours = h;
}

EnergyDevice::EnergyDevice(const EnergyDevice& obj) {
    deviceName = obj.deviceName;
    power = obj.power;
    hours = obj.hours;
}

void EnergyDevice::setDevice(string name) {
    deviceName = name;
}

void EnergyDevice::display() {
    cout << "Device: " << deviceName << endl;
    cout << "Power: " << power << endl;
    cout << "Hours: " << hours << endl;
}
