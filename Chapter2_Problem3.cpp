/*
File Name:Chapter2_Problem3.cpp
Programmer: Jason Cronenwett
Date: 15Feb2026
Requirements: A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:
• The approximate number of customers in the survey who purchase one or more energy drinks per week.
• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

*/
#include <iostream>
using namespace std;

int main()
{
    double purchase_energy = 0.15 * 16500;
    double purchase_citrus= purchase_energy * 0.58;

    cout << "The customers who prefer one or more energy drinks: " << purchase_energy << endl;
    cout << "The customers who prefer citrus flavored energy drinks: " << purchase_citrus << endl;
    
   
    return 0; 
}