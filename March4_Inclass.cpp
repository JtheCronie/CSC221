#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double PI = 3.14159;        // Named constant for pi
    const double SLICE_AREA = 14.125; // Area of one slice

    double diameter;
    double area;
    double numberOfSlices;

    // Ask user for diameter
    cout << "Enter the diameter of the pizza in inches: ";
    cin >> diameter;

    // LOGIC BUG:
    // Using diameter directly instead of radius (should divide by 2 first)
    area = PI * diameter * diameter;

    // Calculate number of slices
    numberOfSlices = area / SLICE_AREA;

    // Display result rounded to 1 decimal place
    cout << fixed << setprecision(1);
    cout << "Number of slices: " << numberOfSlices << endl;

    return 0;
}

____________________________________________________________________________________

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double actualValue;
    double assessmentValue;
    double propertyTax;

    // Ask user for actual property value
    cout << "Enter the actual value of the property: $";
    cin >> actualValue;

    // Calculate assessment value (60% of actual value)
    assessmentValue = actualValue * 0.60;

    // BUG: Incorrect property tax calculation
    // It should divide by 100 first, but instead multiplies directly
    propertyTax = assessmentValue * 0.75;  

    // Display results with two decimal places
    cout << fixed << setprecision(2);
    cout << "\nAssessment Value: $" << assessmentValue << endl;
    cout << "Property Tax: $" << propertyTax << endl;

    return 0;
}