/*
File Name:Chapter2_Problem2.cpp
Programmer: Jason Cronenwett
Date: 15Feb2026
Requirements: A car holds 15 gallons of gasoline and can travel 375 miles before refueling. 
Write a program that calculates the number of miles per gallon the car gets. 
Display the result on the screen.

Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Miles Driven/Gallons of Gas Used


*/
#include <iostream>
using namespace std;

int main()
{
    double gallons = 15;
    double miles= 375;
    double mpg = miles/gallons;

    cout << "The number of miles per gallon the car gets : " << mpg << endl;
      
   
    return 0; 
}