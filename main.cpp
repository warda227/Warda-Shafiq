#include "EnergyTracker.h"

int main() {
    EnergyDevice d1;
    EnergyDevice d2("AC", 1500, 5);
    EnergyDevice d3(d2);

    d1.setDevice("Fan");

    cout << "Device 1:\n";
    d1.display();

    cout << "\nDevice 2:\n";
    d2.display();

    cout << "\nDevice 3:\n";
    d3.display();

    return 0;
}