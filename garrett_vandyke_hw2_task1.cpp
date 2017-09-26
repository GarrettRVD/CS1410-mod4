// File: garrett_vandyke_hw2_task1
// Created by Garrett Van Dyke on 9/19/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <iomanip>
using namespace std;
// Structures, Constants
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

// Function prototypes
struct house InputHouse(void);
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/* Main Program */
int main(int argc, char* argv[])
{
    cout<<"Enter info for first house\n";
    struct house firstHouse = InputHouse();
    cout<<"\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);
    /* Based on comparison value, use a switch
     * statement to display all posibilities:
     * 1) "the first house is cheaper"
     * 2) "the two houses are equally expensive"
     * 3) "the second house is cheaper"
     * 4) "invalid comparison value there must be a bug"
     */

    switch(comparison)
    {
        case 1:
            cout << "The first house is cheaper" << endl;
            break;
        case 2:
            cout << " The two houses are equally expensive" << endl;
            break;
        case 3:
            cout << "The second house is cheaper" << endl;
            break;
        default:
            cout << "Invalid comparison value. There must be a bug." << endl;
    }

    return 0;
}

/* Function Defenitions */
struct house InputHouse(void)
{
    house houseDetails;

    cout << "Please enter the street Number: " << endl;
    cin >> houseDetails.streetNum;
    cout << "Please enter the street Name: " << endl;
    cin >> houseDetails.streetName;
    cout << "Please enter the Price: " << endl;
    cin >> houseDetails.price;

    return houseDetails;
}

void PrintHouse(int houseNum, struct house h)
{
    cout << houseNum << " house at " << h.streetNum << " "
         << h.streetName << " for " << "$[" << fixed << setprecision(2)
         << h.price << "]" << endl;
}

int ComparePrices(struct house h1, struct house h2)
{
    int comparison;

    if(h1.price < h2.price)
    {
        comparison = 1;
    }
    else if(h1.price == h2.price)
    {
        comparison = 2;
    }
    else if(h1.price > h2.price)
    {
        comparison = 3;
    }

    return comparison;
}