// Chapter3Ex19.cpp : This file contains the 'main' function. Program execution begins 

/* File Name: Chapter3Ex19.cpp
Programmer: Jason Cronenwett
Date: 03/02/2026
Requirements:
The monthly payment on a loan may be calculated by the following formula:


0. Setup program
    a.include statements for library
    b. add "using namespace" statement
    c. declare variables
    d.initialize variable if needed.

1. Get info from user.
    a. Get interest rate from user.
    b. Get number of payments from user.
    c. Get loan amount.

2. Calculate formula
    a. Payment = (look at formula in problem)
    b. Amount paid back.
    c. Amount of interest paid.
Display results.    
    a. Output rate, payments, 



*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

double interestRate;
double numberOfPayments;
double loanAmount;
double paymentAmount;
double paidBackAmount;
double interestPaid;
double interimComp;

cout << " Please enter the interest rate of your loan ";
cin >> interestRate;
cout << " How many total payments ";
cin >> numberOfPayments;
cout << " How much is the loan for? ";
cin >> loanAmount;

interimComp = pow(1 + interestRate, numberOfPayments);
    
paymentAmount = (interestRate * (interimComp)/
(interimComp-1)) * loanAmount;
    
    setprecision(2);
    cout << " Loan Amount: " << setw(15) <<right << "$" << loanAmount << endl;
    cout << " Monthly Interest Rate " << setw(15) <<right << "$" << interestRate * 100 <<  "%" << endl;
    cout << " Number Of Payments " << numberOfPayments << endl;
    cout << " Monthly Payment: " << setw(15) <<right << "$" << paymentAmount << endl;

}