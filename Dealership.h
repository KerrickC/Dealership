#pragma once
#include <vector>

#include "Showroom.h"
#include "Vehicle.h"

class Dealership {

private:
    string name;
    unsigned int capacity;
    vector<Showroom> dealer_inventory;

public:

    Dealership();

    Dealership(string name, unsigned int dealer_capacity);

    void AddShowroom(Showroom s);

    float GetAveragePrice();

    void ShowInventory();

};