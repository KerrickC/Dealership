#pragma once
#include <string>

using namespace std;

class Vehicle {
private:
    string make;
    string model;
    unsigned int year;
    float price;
    unsigned int mileage;

public:
    Vehicle(); //default

    Vehicle(string make, string model, unsigned int year, float price, unsigned int mileage); //all params

    void Display();

    unsigned int GetPrice();

    string GetYearMakeModel();

};