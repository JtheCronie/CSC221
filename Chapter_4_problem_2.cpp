// Chapter4problem2.cpp : This file contains the 'main' function. Program execution begins 

/* File Name: Chapter_4__problem_2.cpp
Programmer: Jason Cronenwett
Date: 03/22/2026

Requirements:
Write a program that asks for the weight of a package and the distance
it is to be shipped, then displays the shipping charge.

0. Setup program
    a. Include statements for library
    b. Add "using namespace" statement
    c. Declare variables (weight, distance, rate, charge)

1. Get info from user.
    a. Get weight of package from user (must be greater than 0 and no more than 20 kg)
    b. Get distance to ship from user (must be between 10 and 3,000 miles)

2. Validate input.
    a. If weight is 0 or less, display error and stop
    b. If weight is more than 20 kg, display error and stop
    c. If distance is less than 10 miles, display error and stop
    d. If distance is more than 3,000 miles, display error and stop

3. Determine rate based on weight.
    a. If weight is 2 kg or less, rate = 1.10
    b. If weight is over 2 kg but not more than 6 kg, rate = 2.20
    c. If weight is over 6 kg but not more than 10 kg, rate = 3.70
    d. If weight is over 10 kg but not more than 20 kg, rate = 4.80

4. Calculate charge.
    a. charge = rate * (distance / 500.0)

5. Display results.
    a. Output the shipping charge*
    */

#include <iostream>
using namespace std;

int main() {
    double weight, distance, rate, charge;

    // Get input
    cout << "Enter the weight of the package (kg): ";
    cin >> weight;

    cout << "Enter the distance to ship (miles): ";
    cin >> distance;

    // Validate input
    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight. Must be greater than 0 and no more than 20 kg." << endl;
        return 0;
    }

    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance. Must be between 10 and 3,000 miles." << endl;
        return 0;
    }

    // Determine rate
    if (weight <= 2) {
        rate = 1.10;
    } else if (weight <= 6) {
        rate = 2.20;
    } else if (weight <= 10) {
        rate = 3.70;
    } else {
        rate = 4.80;
    }

    // Calculate charge
    charge = rate * (distance / 500.0);

    // Display result
    cout << "Shipping charge: $" << charge << endl;

    return 0;
}