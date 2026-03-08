/*
File Name: Chapter2_EX5.cpp
Programmer:Jason Cronenwett
Date: 25FEB2026Requirements:
Male and female percentages.
0. Declare variables needed.
    A.Total students
    B. Female count
    C. Male count.
1. Get info from user.
    A. Get number of males in the class.
    B. Get number of females in the class.
2. Calculate male and female percentages.
    A.Compute total number of students
    B. Compute percentage of males
    C. Compute number of females.

3. Display results.
*/

#include <iostream>
using namespace std;
double GetInfo() {
    double males;

    cout <<"Please enter the number of males";
    cin >> males;
    return males;
}

int main()
{
    double males;
    double females;
    int totalStudents;
    double percentOfMales;
    double percentOfFemales;

    

    cout << "Please enter the number of males in the class";
    cin >> males;
    

    cout << "Please enter the number of females in the class";
    cin >> females;
    males = static_cast<double>(males);
    females = static_cast<double>(females);
    totalStudents = males + females; 

    
    percentOfMales = males/totalStudents;
    percentOfFemales = females/totalStudents;

    cout << "The percent of Males in the class is " << percentOfMales << endl;
    cout << "The percent of Males in the class is " << percentOfFemales << endl;

    return 0;





}