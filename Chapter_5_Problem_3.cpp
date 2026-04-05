/* File Name: Chapter5_Problem2.cpp
Programmer: Jason Cronenwett
Date: 04/05/2026
Requirements:
Write a program that organizes student names
-----------
0. Setup program
   a. Include statements for libraries: <iostream>, <string>
   b. Add "using namespace std" statement
   c. Declare variables: numStudents (integer), name (string),
    first (string), last (string)
   d. Initialize variables: none

1. Get info from user
   a. Prompt and read numStudents
      - Validate: must be >= 1 and <= 25, re-prompt if not

2. Read student names and find first/last in line
   a. Read the first name and set both first = name and last = name
   b. Loop from 2 to numStudents:
      - Read each name
      - If name < first alphabetically, set first = name
      - If name > last alphabetically, set last = name

3. Display results
   a. Output the name that would be at the front of the line
   b. Output the name that would be at the end of the line
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;
    string name, first, last;

    do {
        cout << "Enter the number of students (1-25): ";
        cin >> numStudents;
        if (numStudents < 1 || numStudents > 25)
            cout << "Error: Number of students must be between 1 and 25.\n";
    } while (numStudents < 1 || numStudents > 25);

    cout << "Enter student name 1: ";
    cin >> first;
    last = first;

    for (int i = 2; i <= numStudents; i++) {
        cout << "Enter student name " << i << ": ";
        cin >> name;

        if (name < first)
            first = name;
        if (name > last)
            last = name;
    }

    cout << "\nStudent at the front of the line: " << first << "\n";
    cout << "Student at the end of the line:   " << last  << "\n";

    return 0;
}