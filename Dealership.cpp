#include "Dealership.h"
#include <iostream>

Dealership::Dealership() {
    name = "Generic Dealership";
    capacity = 0;
}

Dealership::Dealership(string name, unsigned int capacity) {
    this->name = name;
    this->capacity = capacity;
}

void Dealership::AddShowroom(Showroom s) {
    if(dealer_inventory.size() == capacity){
        cout << "Dealership is full, can't add another showroom!" << endl;
    }else{
        dealer_inventory.push_back(s);
    }
}

void Dealership::ShowInventory() {
    if(dealer_inventory.size() == 0){
        cout << name << " is empty!" << endl;
        cout << "Average car price: " << "$0.00";
    }else{
        for(int i = 0; i < dealer_inventory.size(); i ++){
            dealer_inventory[i].ShowInventory();
            cout << endl;
        }
        cout << "Average car price: " << "$" << GetAveragePrice();
    }


}

float Dealership::GetAveragePrice() {

    unsigned int numCars = 0;
    float totalPrice = 0.0f;
    float average_price = 0.0f;

    for(unsigned int i = 0; i < dealer_inventory.size(); i++){
        numCars += dealer_inventory[i].GetVehicleList().size();
        totalPrice += dealer_inventory[i].GetInventoryValue();
    }

    average_price = totalPrice / numCars;

    return average_price;

}
