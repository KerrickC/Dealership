#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
    make = "COP3503";
    model = "Rust Bucket";
    year = 1900;
    price = 0;
    mileage = 0;
}

Vehicle::Vehicle(string make, string model, unsigned int year, float price, unsigned int mileage){
    this->make = make;
    this->model = model;
    this->year = year;
    this->price = price;
    this->mileage = mileage;
}

void Vehicle::Display(){

    cout << year << " " << make << " " << model << " " << "$" << price << " " << mileage << endl;

}

unsigned int Vehicle::GetPrice(){

    return price;

}

string Vehicle::GetYearMakeModel(){

    string retVal = to_string(year) + " " + make + " " + model;

    return retVal;

}