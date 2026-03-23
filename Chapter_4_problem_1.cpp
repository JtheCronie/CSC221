// Chapter3Ex19.cpp : This file contains the 'main' function. Program execution begins 

/* File Name: Chapter_4__problem_1.cpp
Programmer: Jason Cronenwett
Date: 03/22/2026

Requirements:
Write a program that asks the user to enter a month (1–12) and a year,
then displays the number of days in that month accounting for leap years.

0. Setup program
    a. Include statements for library
    b. Add "using namespace" statement
    c. Declare variables (month, year, days)

1. Get info from user.
    a. Get month from user (integer 1–12)
    b. Get year from user

2. Determine if it is a leap year.
    a. If year is divisible by 100, it is a leap year only if also divisible by 400
    b. Otherwise, it is a leap year if divisible by 4

3. Determine days in the month.
    a. If month is February (2), days = 29 if leap year, otherwise 28
    b. If month is April (4), June (6), September (9), or November (11), days = 30
    c. All other months, days = 31

4. Display results.
    a. Output the number of days in the entered month
*/

#include <iostream>
using namespace std;

int main() {
    int month, year;

    cout << "Enter a month (1-12): ";
    cin >> month;

    cout << "Enter a year: ";
    cin >> year;

    // Determine if it's a leap year
    bool isLeapYear;
    if (year % 100 == 0) {
        isLeapYear = (year % 400 == 0);
    } else {
        isLeapYear = (year % 4 == 0);
    }

    // Determine days in the month
    int days;
    if (month == 2) {
        days = isLeapYear ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

    cout << days << " days" << endl;

    return 0;
}