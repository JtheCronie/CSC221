/* File Name: Chapter_5_Problem_4.cpp
Programmer: Jason Cronenwett
Date: 04/10/2026
Requirements:
Write a program that displays Pattern A followed by a loop displaying Pattern B
*/

#include <iostream>
#include <string>
using namespace std;

// Pattern A: increasing + signs from 1 to 11
void displayPatternA() {
    cout << "Pattern A" << endl;
    for (int i = 1; i <= 11; i++) {
        for (int j = 0; j < i; j++) {
            cout << "+";
        }
        cout << endl;
    }
}

// Pattern B: decreasing + signs from 11 to 1
void displayPatternB() {
    cout << "Pattern B" << endl;
    for (int i = 11; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "+";
        }
        cout << endl;
    }
}

// Validate user input 
char getValidInput(string prompt) {
    char choice;
    do {
        cout << prompt;
        cin >> choice;
        choice = toupper(choice);
        if (choice != 'A' && choice != 'B' && choice != 'C') {
            cout << "Invalid input. Please enter A, B, or C." << endl;
        }
    } while (choice != 'A' && choice != 'B' && choice != 'C');
    return choice;
}

// Program flow 
int main() {
    char choice, again;

    cout << "=== Pattern Display Program ===" << endl;

    do {
        cout << "\nWhich pattern would you like to display?" << endl;
        cout << "  A - Pattern A (increasing)" << endl;
        cout << "  B - Pattern B (decreasing)" << endl;
        cout << "  C - Both patterns" << endl;

        choice = getValidInput("Enter your choice (A/B/C): ");

        cout << endl;
        if (choice == 'A') {
            displayPatternA();
        } else if (choice == 'B') {
            displayPatternB();
        } else {
            displayPatternA();
            cout << endl;
            displayPatternB();
        }

        cout << "\nWould you like to run again? (Y/N): ";
        cin >> again;
        again = toupper(again);

    } while (again == 'Y');

    cout << "\nGoodbye!" << endl;
    return 0;
}