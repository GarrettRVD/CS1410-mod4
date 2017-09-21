// File: distanceClass
// Created by Garrett Van Dyke on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Task: Define a class Distance that stores int feet and float inches
// Two methods: setDist -> Set the information
//              getDist -> Set the information with customer input
//              showDist -> Display information
// Constants, Classes, Structures
class Distance
{
private:
    int feet;
    float inches;
public:
    void setDist(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void getDist()      // Get user input
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
    }
    void showDist()     // Display information
    {
        cout << "Feet " << feet << " and inches " << inches << endl;
    }
};

// Prototypes


// Main Program
int main()
{
    // Create an instance "instantiate" the class
    Distance d1, d2;

    // Use methods to set/access data
    d1.setDist(5, 9.0);
    d2.getDist();

    d1.showDist();
    d2.showDist();

    return 0;
}

// Function Definitions