// Chapter3_Problem1.cpp : This file contains the 'main' function. Program execution begins 

/* File Name: Chapter3_Problem1.cpp
Programmer: Jason Cronenwett
Date: 03/08/2026
Requirements:
Produce 48 cookies with the ingredients required for the program.


0. Setup program
    a.include statements for library
    b. add "using namespace" statement
    c. declare variables
    d.initialize variable if needed.

1. Get info from user.
    a. Get info on how many cookies they want to make.

2. Calculate formula
    a. Sugar = 1.5 cups
    b. Butter = 1 cup
    c. Flour = 2.75 cups
Display results.    
    a. Output cookie amount and the number of cups for each ingredient. 



*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;






int main() {

double sugar = 1.5;
double butter = 1;
double flour = 2.5;
int cookieNo;

cout << " Please enter the quantity of cookies you desire to create ";
cin >> cookieNo;
cout << " Sugar " << (sugar /48) * cookieNo <<endl;
cout << " Butter " << (butter/48) * cookieNo <<endl;
cout << " Flour " << (flour/48) * cookieNo <<endl;

return 0;

}