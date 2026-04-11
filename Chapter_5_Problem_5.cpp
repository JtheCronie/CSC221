/* File Name: Chapter_5_Problem_5.cpp
Programmer: Jason Cronenwett
Date: 04/10/2026
Requirements:
Write a program that is a random number guessing game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generate a random number between 1 and 100
int generateRandomNumber() {
    srand(time(0));
    return (rand() % 100) + 1;
}

// Get and validate the user's guess
int getValidGuess() {
    int guess;
    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        if (guess < 1 || guess > 100) {
            cout << "Invalid input. Please enter a number between 1 and 100." << endl;
        }
    } while (guess < 1 || guess > 100);
    return guess;
}

// Run the guessing game loop
void playGame() {
    int randomNumber = generateRandomNumber();
    int guess;
    int attempts = 0;

    cout << "\nI have generated a random number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        guess = getValidGuess();
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high, try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low, try again." << endl;
        } else {
            cout << "Correct! You guessed it in " << attempts << " attempt(s)!" << endl;
        }
    } while (guess != randomNumber);
}

// Controls program flow 
int main() {
    char playAgain;

    cout << "=== Random Number Guessing Game ===" << endl;

    do {
        playGame();

        cout << "\nWould you like to play again? (Y/N): ";
        cin >> playAgain;
        playAgain = toupper(playAgain);

    } while (playAgain == 'Y');

    cout << "\nThanks for playing. Goodbye!" << endl;
    return 0;
}