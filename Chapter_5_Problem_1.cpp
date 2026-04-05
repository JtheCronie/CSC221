/* File Name: Chapter5_Problem1.cpp
Programmer: Jason Cronenwett
Date: 04/05/2026
Requirements:
Write a program that will predict the size of a population of organisms.

   a. Include statements for libraries: <iostream>, <iomanip>
   b. Add "using namespace std" statement
   c. Declare variables: startPop (integer), numDays (integer),
   dailyIncrease (double), population (double)
   d. Initialize variables: population = startPop (after input)

1. Get info from user
   a. Prompt and read startPop
      - Validate: must be >= 2, re-prompt if not
   b. Prompt and read dailyIncrease
      - Validate: must be >= 0, re-prompt if not
   c. Prompt and read numDays
      - Validate: must be >= 1, re-prompt if not

2. Calculate population growth
   a. Set population = startPop
   b. For each day 1 to numDays:
      - population = population * (1 + dailyIncrease / 100)

3. Display results
   a. Output table header: "Day" and "Population"
   b. Output population size for each day
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startPop, numDays;
    double dailyIncrease, population;

    do {
        cout << "Enter the starting number of organisms (minimum 2): ";
        cin >> startPop;
        if (startPop < 2)
            cout << "Error: Starting population must be at least 2.\n";
    } while (startPop < 2);

    do {
        cout << "Enter the average daily population increase (%): ";
        cin >> dailyIncrease;
        if (dailyIncrease < 0)
            cout << "Error: Daily increase cannot be negative.\n";
    } while (dailyIncrease < 0);

  
    do {
        cout << "Enter the number of days they will multiply (minimum 1): ";
        cin >> numDays;
        if (numDays < 1)
            cout << "Error: Number of days must be at least 1.\n";
    } while (numDays < 1);


    cout << "\n" << left << setw(10) << "Day" << "Population\n";
    cout << string(30, '-') << "\n";

    population = startPop;
    for (int day = 1; day <= numDays; day++) {
        population = population * (1 + dailyIncrease / 100.0);
        cout << left << setw(10) << ("Day " + to_string(day))
             << fixed << setprecision(2) << population << "\n";
    }

    return 0;
}