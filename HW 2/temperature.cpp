// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 2 - Problem #5

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// This asks the user to input a temperature in fahrenheit and stores their input as the a double variable temp_fahrenheit

    cout << "Enter a temperature in Fahrenheit: " << endl;
    double temp_fahrenheit;
    cin >> temp_fahrenheit;
    
// conversion is stored as a double so it can use decimals
// 5.0 is used instead of 5 so that it can output an answer with decimals instead of integers
// temp_fahrenheit was the number the user input from earlier
    
    double conversion = (5.0/9) * (temp_fahrenheit - 32);

// this prints the temperature the user input in fahrenheit to degrees celsius based off the calculated conversion from earlier
// to put the answer to two decimal places, setprecision(2) is used
    
    cout << "The temperature " << temp_fahrenheit << " degrees Fahrenheit is " << fixed << setprecision(2) << conversion << " degrees Celsius." << endl;
    
}