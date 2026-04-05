/* File Name: Chapter5_Problem2.cpp
Programmer: Jason Cronenwett
Date: 04/05/2026
Requirements:
Write a program that produces a bar chart showing the population growth os Prarieville...
-----------
0. Setup program
   a. Include statements for libraries: <iostream>, <fstream>, <string>
   b. Add "using namespace std" statement
   c. Declare variables: population (integer), year (integer),
                         inFile (ifstream), stars (string)
   d. Initialize variables: year = 1900

1. Get info from file
   a. Open "People.txt" for reading
   b. Validate file opened successfully, exit if not
   c. Read each of the 6 population values from the file

2. Calculate bar for each year
   a. For each population value read:
      - Determine number of asterisks = population / 1000

3. Display results
   a. Output title: "PRAIRIEVILLE POPULATION GROWTH"
   b. Output legend: "(each * represents 1,000 people)"
   c. For each year 1900, 1920, 1940, 1960, 1980, 2000:
      - Output year followed by one asterisk per 1,000 people
   d. Close the file
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int population, year;
    ifstream inFile;
    string stars;

    inFile.open("People-1.txt");
    if (!inFile) {
        cout << "Error: Could not open People.txt\n";
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1,000 people)\n\n";
   
    year = 1900;
    while (inFile >> population) {
        stars = string(population / 1000, '*');
        cout << year << "  " << stars << "\n";
        year += 20;
    }

    inFile.close();
    return 0;
}