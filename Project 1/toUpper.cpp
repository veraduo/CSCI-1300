// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 1 - Problem #3

#include <iostream>
#include <string>
using namespace std;

// this function is a string which takes the user's input as a string as well
// it converts lowercase strings to uppercase and returns the input as uppercase letters
string toUpper(string input) 
{

// we start iterating at 0 until it reaches the length of the input
// it will keep iterating until i reaches the end of the string

    for (int i = 0; i < input.length(); ++i) 
    {

// the function islower tests if the letters are lowercase at position i

        if (islower(input[i])) 
        {

// at position i, the function toupper converts it to uppercase at that position
            input[i] = toupper(input[i]);
        }
    }
    
// the input is then converted to uppercase
    return input;
}



