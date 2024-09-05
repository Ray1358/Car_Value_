//
// Copyright 2024
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
    modelYear = userYear;
}

int Car::GetModelYear() const {
    return modelYear;
}

// TODO: Implement SetPurchasePrice() function
int Car::SetPurchasePrice(int userPrice){
    purchasePrice = userPrice;
    return purchasePrice;
}

// TODO: Implement GetPurchasePrice() function
int Car::GetPurchasePrice() const {
    return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
    double depreciationRate = 0.15;
    int carAge = currentYear - modelYear;

    // Car depreciation formula
    currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

// TODO: Implement PrintInfo() function to output modelYear, purchasePrice, and
// currentValue
void Car::PrintInfo() const {
    cout << fixed << setprecision(0);
    cout << "Car's information:" << endl;
    cout << "  Model year: " << GetModelYear() << endl;
    cout << "  Purchase price: $" << GetPurchasePrice() << endl;
    cout << "  Current value: $" << currentValue << endl;
}
