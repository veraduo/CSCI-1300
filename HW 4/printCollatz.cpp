// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 4 - Problem #2

#include <iostream>
using namespace std; 

int main() 
{ 
    cout << "Enter a positive number: " << endl;
    int input_n;
    cin >> input_n;
    
    
// this loop will continue as long as the user inputs a number that isn't 1 and will continue until it reaches 1
    while (input_n != 1) 
    { 
        cout << input_n << " " << endl; 
 
 // This is when the input is an odd number 
 // & stores the reference 
        // if (input_n & 1)
        if (input_n % 2 != 0)
        {
            input_n = (3 * input_n) + 1; 
        }
 
// If input_n is even then input_n is divided by 2
        else
        {
            input_n = input_n / 2; 
        }
    } 
    
// this will print all of the outputs calculated in the loop vertically
    cout << input_n << endl;
    
return 0; 
}

