// Chapter3_Problem3.cpp : This file contains the 'main' function. Program execution begins 

/* File Name: Chapter3_Problem3.cpp
Programmer: Jason Cronenwett
Date: 03/08/2026
Requirements:
Calculate monthly payments


0. Setup program
    a.include statements for library
    b. add "using namespace" statement
    c. declare variables
    d.initialize variable if needed.

1. Get info from user.
    a. User enters how much the interest rate is
    b. User enters the amount of payments
    c. User enters the amount of loan

2. Calculate formula for"
    a. Loan amount
    b. monthly interest rate
    c. number of payments
    d. monthly payment
    e. amount paid back
    f. interest paid
    
Display results.    
    a. read out of the formulas 



*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double interestRate, numberOfPayments, loanAmount;
    double paymentAmount, paidBackAmount, interestPaid, interimComp;

    cout << "Please enter the annual interest rate: ";
    cin >> interestRate;
    interestRate = interestRate / 100;  // convert to decimal, then monthly

    cout << "How many total payments: ";
    cin >> numberOfPayments;

    cout << "How much is the loan for? ";
    cin >> loanAmount;

    interimComp = pow(1 + interestRate, numberOfPayments);
    paymentAmount = (interestRate * interimComp / (interimComp - 1)) * loanAmount;
    paidBackAmount = paymentAmount * numberOfPayments;
    interestPaid = paidBackAmount - loanAmount;

    cout << fixed << setprecision(2);
    cout << "Loan Amount:           $ " << setw(10) << right << loanAmount << endl;
    cout << "Monthly Interest Rate:   " << setw(10) << right << interestRate * 100 << "%" << endl;
    cout << "Number of Payments:      " << setw(10) << right << numberOfPayments << endl;
    cout << "Monthly Payment:       $ " << setw(10) << right << paymentAmount << endl;
    cout << "Amount Paid Back:      $ " << setw(10) << right << paidBackAmount << endl;
    cout << "Interest Paid:         $ " << setw(10) << right << interestPaid << endl;

    return 0;
}



