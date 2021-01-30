#include "Showroom.h"
#include <iostream>

Showroom::Showroom(){
    name = "Unnamed Showroom";
    capacity = 0;
}

Showroom::Showroom(string name, unsigned int capacity){
    this->capacity = capacity;
    this->name = name;
}

vector<Vehicle> Showroom::GetVehicleList() {
    return inventory;
}

void Showroom::AddVehicle(Vehicle v) {

    if(inventory.size() == capacity){
        cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << endl;
    }else{
        inventory.push_back(v);
    }

}

float Showroom::GetInventoryValue() {

    float inventoryValue = 0;

    for (int i = 0; i < inventory.size(); i++) {
        inventoryValue += inventory[i].GetPrice();
    }

    return inventoryValue;

}

void Showroom::ShowInventory() {

    if(inventory.size() == 0){
        cout << name << " is empty!" << endl;
    }else{
        cout << "Vehicles in " << name << endl;
        for(int i = 0; i < inventory.size(); i ++){
            inventory[i].Display();
        }
    }

}
