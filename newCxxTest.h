//
// CopyRight 2024
//

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.
    void testSetModelYear() {
        Car myCar;
        myCar.SetModelYear(2020);
        TS_ASSERT_EQUALS(myCar.GetModelYear(), 2020);
    }
};

#endif //NEWCXXTEST_H
