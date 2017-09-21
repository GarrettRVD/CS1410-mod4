// File: PointClass
// Created by Garrett Van Dyke on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants, Classes, Structures
class Point
{
private:
    float x;
    float y;
public:
    // Constructor
    Point(): x(0.0), y(0.0)
    {}
    // Methods
    void showPoint()
    {
        cout << "The point is: (" << x << "," << y << ")" << endl;
    }
    void updatePoint(float xnew, float ynew)
    {
        x = xnew;
        y = ynew;
    }
};

// Prototypes


// Main Program
int main()
{
    Point p1;

    p1.showPoint();         // display values

    p1.updatePoint(2, 7);   // update values
    p1.showPoint();         // display values

    return 0;
}

// Function Definitions