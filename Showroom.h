#pragma once

#include "Vehicle.h"
#include <vector>

class Showroom {
private:
    string name;
    vector<Vehicle> inventory;
    unsigned int capacity;

public:
    Showroom();

    Showroom(string name, unsigned int capacity);

    vector<Vehicle> GetVehicleList();

    void AddVehicle(Vehicle v);

    void ShowInventory();

    float GetInventoryValue();

};
