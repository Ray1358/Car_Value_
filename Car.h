//
// Copyright 2024
//

#ifndef CAR_H
#define CAR_H


class Car {
private:
    int modelYear;
    // TODO: Declare purchasePrice member (int)
    int purchasePrice;
    double currentValue;

public:
    void SetModelYear(int userYear);

    int GetModelYear() const;

    // TODO: Declare SetPurchasePrice() function
    int SetPurchasePrice(int userPrice);

    // TODO: Declare GetPurchasePrice() function
    int GetPurchasePrice() const;

    void CalcCurrentValue(int currentYear);

    // TODO: Declare PrintInfo() method to output modelYear, purchasePrice, and
    // currentValue
    void PrintInfo() const;

};



#endif //CAR_H
