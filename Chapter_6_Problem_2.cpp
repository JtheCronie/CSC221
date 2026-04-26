/* File Name: Chapter_6_Problem_1.cpp
Programmer: Jason Cronenwett
Date: 04/26/2026
Requirements:
Estimate paint job cost:
1. The number of gallons of paint required
2. Hours of laobr required
3. The cost of the paing
4. Labor charges
5. Total cost of paint job
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double SQFT_PER_GALLON = 110.0;
const double HOURS_PER_GALLON = 8.0;
const double LABOR_RATE = 25.00;

int getNumRooms() {
    int rooms;
    cout << "Enter the number of rooms to be painted: ";
    cin >> rooms;
    while (rooms < 1) {
        cout << "Number of rooms must be at least 1. Try again: ";
        cin >> rooms;
    }
    return rooms;
}

double getPaintPrice() {
    double price;
    cout << "Enter the price of paint per gallon: $";
    cin >> price;
    while (price < 10.00) {
        cout << "Price must be at least $10.00. Try again: $";
        cin >> price;
    }
    return price;
}

double getTotalSqFt(int numRooms) {
    double total = 0.0;
    for (int i = 1; i <= numRooms; i++) {
        double sqft;
        cout << "Enter square feet of wall space for room " << i << ": ";
        cin >> sqft;
        while (sqft < 0) {
            cout << "Square footage cannot be negative. Try again: ";
            cin >> sqft;
        }
        total += sqft;
    }
    return total;
}

void displayEstimate(double gallons, double hours, double paintCost, double laborCost) {
    cout << fixed << setprecision(2);
    cout << "\n--- Paint Job Estimate ---\n";
    cout << "Gallons of paint required: " << gallons << "\n";
    cout << "Hours of labor required:   " << hours << "\n";
    cout << "Cost of paint:             $" << paintCost << "\n";
    cout << "Labor charges:             $" << laborCost << "\n";
    cout << "Total cost:                $" << paintCost + laborCost << "\n";
}

int main() {
    int rooms = getNumRooms();
    double paintPrice = getPaintPrice();
    double totalSqFt = getTotalSqFt(rooms);

    double gallons = totalSqFt / SQFT_PER_GALLON;
    double hours = gallons * HOURS_PER_GALLON;
    double paintCost = gallons * paintPrice;
    double laborCost = hours * LABOR_RATE;

    displayEstimate(gallons, hours, paintCost, laborCost);
    return 0;
}