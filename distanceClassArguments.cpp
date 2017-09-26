// File: distanceClassArguments
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
    Distance(): feet(0), inches(0)  // Constructor with no arguments
    {/*Empty body*/}
    Distance(int ft, float in): feet(ft), inches(in)    // Constructor with two arguments
    {/*Empty body*/}

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
    void add_dist(Distance d1, Distance d2);
};

// Prototypes


// Main Program
int main()
{
    // Create an instance "instantiate" the class
    Distance d1, d4;
    Distance d2(8, 2);
    Distance d3(2, 4);
    // Use methods to set/access data
    //d1.setDist(5, 9.0);
    //d2.getDist();

    d1.showDist();
    d2.showDist();
    d3.showDist();

    d4.add_dist(d2, d3);
    cout << "d4 = ";
    d4.showDist();

    return 0;
}

// Function Definitions
// Belongs to the class.  A method for members only
// Template: type CLASSNAME::Function_name()
/* 1) Declare prototype inside class
 * 2) Definition is outside class
 * 3) Use the scope resolution operator ::
 */
void Distance::add_dist(Distance d1, Distance d2)
{
    inches = d1.inches + d2.inches;
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    feet += d1.feet + d2.feet;
}