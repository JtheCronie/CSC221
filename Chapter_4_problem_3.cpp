// Chapter4problem3.cpp : This file contains the 'main' function. Program execution begins 

/* File Name: Chapter_4__problem_3.cpp
Programmer: Jason Cronenwett
Date: 03/22/2026


Requirements:
Write a program that displays a geometry calculator menu and performs
the selected area calculation.

0. Setup program
    a. Include statements for library
    b. Add "using namespace" statement
    c. Declare variables (choice, and shape-specific inputs)

1. Display menu.
    a. Print "Geometry Calculator"
    b. Print options 1–4

2. Get choice from user.
    a. Get integer choice (1–4)
    b. If choice is outside 1–4, display error and stop

3. Based on choice, get inputs and calculate.
    a. Choice 1 (Circle):
        - Get radius (must be >= 0)
        - area = 3.14159 * radius * radius
    b. Choice 2 (Rectangle):
        - Get length and width (both must be >= 0)
        - area = length * width
    c. Choice 3 (Triangle):
        - Get base and height (both must be >= 0)
        - area = base * height * 0.5
    d. Choice 4 (Quit):
        - End the program

4. Display results.
    a. Output the area of the selected shape
    */
   #include <iostream>
using namespace std;

int main() {
    int choice;
    double area;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    
    if (choice < 1 || choice > 4) {
        cout << "Invalid choice." << endl;
        return 0;
    }

   
    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius < 0) {
                cout << "Invalid input. Radius cannot be negative." << endl;
                return 0;
            }
            area = 3.14159 * radius * radius;
            cout << "The area of the circle is " << area << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (length < 0 || width < 0) {
                cout << "Invalid input. Length and width cannot be negative." << endl;
                return 0;
            }
            area = length * width;
            cout << "The area of the rectangle is " << area << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (base < 0 || height < 0) {
                cout << "Invalid input. Base and height cannot be negative." << endl;
                return 0;
            }
            area = base * height * 0.5;
            cout << "The area of the triangle is " << area << endl;
            break;
        }
        case 4:
            cout << "Goodbye!" << endl;
            return 0;
    }

    return 0;
}