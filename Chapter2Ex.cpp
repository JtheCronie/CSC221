/*
File Name:Chapter2Ex7.cpp
Programmer: Jason Cronenwett
Date: 15Feb2026
Requirements: Ocean Levels Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write a program
that displays:
• The number of millimeters higher than the current level that the ocean's level will be in 5 years.
• The number of millimeters higher than the current level that the ocean's level will be in 7 years.
• The number of millimeters higher than the current level that the ocean's level will be in 10 years.

*/
#include <iostream>
using namespace std;

int main()
{
    double ratePerYear = 1.5;

    double rise5 = ratePerYear * 5;
    double rise7 = ratePerYear * 7;
    double rise10 = ratePerYear * 10;

    cout << "Ocean Level Rise Report" << endl;
    cout << "Current rise rate: " << ratePerYear << " mm per year" << endl;
    cout << endl;
    cout << "In 5 years the ocean level will be " << rise5 << " mm higher." << endl;
    cout << "In 7 years the ocean level will be " << rise7 << " mm higher." << endl;
    cout << "In 10 years the ocean level will be " << rise10 << " mm higher." << endl;

    return 0;
}