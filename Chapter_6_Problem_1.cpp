/* File Name: Chapter_6_Problem_1.cpp
Programmer: Jason Cronenwett
Date: 04/27/2026
Requirements:
Create a menu driven project that computes the perimeter and area of various geometric shapes:
1. Perimeter and Area of a Rectangle
2. Perimeter and Area of a Circle
3. Perimeter and Area of a Triangle
*/



#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.14159265358979323846;

// Menu


void displayMenu() {
    cout << "\nGEOMETRIC SHAPES CALCULATOR\n";
    cout << "1. Rectangle\n";
    cout << "2. Circle\n";
    cout << "3. Triangle\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

// Rectangle
void getRectangleInput(double &length, double &width) {
    cout << "\nRectangle\n";
    cout << "Enter length: ";
    cin  >> length;
    cout << "Enter width: ";
    cin  >> width;
}

double rectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

double rectangleArea(double length, double width) {
    return length * width;
}

void computeRectangle() {
    double length, width;
    getRectangleInput(length, width);

    cout << fixed << setprecision(4);
    cout << "\nResults:\n";
    cout << "Perimeter = " << rectanglePerimeter(length, width) << "\n";
    cout << "Area      = " << rectangleArea(length, width)      << "\n";
}

// Circle
void getCircleInput(double &radius) {
    cout << "\nCircle\n";
    cout << "Enter radius: ";
    cin  >> radius;
}

double circlePerimeter(double radius) {
    return 2 * PI * radius;
}

double circleArea(double radius) {
    return PI * radius * radius;
}

void computeCircle() {
    double radius;
    getCircleInput(radius);

    cout << fixed << setprecision(4);
    cout << "\nResults:\n";
    cout << "Circumference = " << circlePerimeter(radius) << "\n";
    cout << "Area          = " << circleArea(radius)      << "\n";
}

// Triangle
void getTriangleInput(double &a, double &b, double &c) {
    cout << "\nTriangle (three sides)\n";
    cout << "Enter side a: ";
    cin  >> a;
    cout << "Enter side b: ";
    cin  >> b;
    cout << "Enter side c: ";
    cin  >> c;
}

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double trianglePerimeter(double a, double b, double c) {
    return a + b + c;
}

double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;          // semi-perimeter (Heron's formula)
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

void computeTriangle() {
    double a, b, c;
    getTriangleInput(a, b, c);

    if (!isValidTriangle(a, b, c)) {
        cout << "\nError: The sides entered do not form a valid triangle.\n";
        return;
    }

    cout << fixed << setprecision(4);
    cout << "\nResults:\n";
    cout << "Perimeter = " << trianglePerimeter(a, b, c) << "\n";
    cout << "Area      = " << triangleArea(a, b, c)      << "\n";
}

int main() {
    int choice;

    do {
        displayMenu();

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInvalid input. Enter a number (1-4).\n";
            continue;
        }

        switch (choice) {
            case 1: computeRectangle(); break;
            case 2: computeCircle();    break;
            case 3: computeTriangle();  break;
            case 4: cout << "\nBye!\n\n"; break;
            default: cout << "\nInvalid choice. Please enter 1-4.\n";
        }

    } while (choice != 4);

    return 0;
}