/* File Name: Class Example- 04Feb26 
Programmer: Jason Cronenwett    
Date: 04Feb26
Requirements:
Write a series of arithmetic statements and display the results of each.
A) Adds 2 to a  and stores the result in b .
B) Multiplies  by 4 and stores the result in a.
C) Divides a by 3.14 and stores the result in b.
D) Subtracts 8 from b and stores the result in a.
E) Stores the value 27 in a.
F) Stores the character 'K' in c.
G) Stores the ASCII code for 'B' in c.
*/

#include <iostream>
using namespace std;

int main()
{
    int a=0;
    double b, c;
    double d;
    char e;
    cout << "This program computes  a number of arithmetic equations" << endl <<
        " and displays the results to the screen" << endl;
    cout << " a = " << endl;
    
    b = a + 2;
    cout << "b = " << endl;
    a = b * 4;
    cout << "Now a = " << a << endl;
    c = a / 3.14;
    cout << "Now c = " << b << endl; 
    a = b - 8;
    cout << "Now b = " << a << endl;
    a = 27;
    cout << "Now a = " << a << endl;
    c = 'K';
    cout << "Now c = " << c << endl;
    c = 'B';


    return 0;
   
}