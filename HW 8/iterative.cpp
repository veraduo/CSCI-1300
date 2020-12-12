// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 8 - Problem #1

#include <iostream>
#include <string>
using namespace std;

string decimalToBinaryIterative(int num) //converts a decimal value to binary using a loop. Takes a non-neg int, and returns a string corresponding to the binary 
{
    string str;
    
    if (num == 0) // if the number entered is zero, in binary is just zero
    {
        str = "0";
    }
    
    while (num > 0) // continue while num > 0
    {
        if (num % 2 == 0) // start with zero if divisible by 2
        {
            str = "0" + str;
        } 
        else // if it has a remainder we add one to the string
        {
            str = "1" + str;
        }
        
        num = num / 2; // divide by 2, and if there's a remainder we add another one and if there isn't a remainder we put zero
    }
    
    return str; // output should be num in binary
}

int main() 
{
    cout << decimalToBinaryIterative(5) << endl; // expected 101
    cout << decimalToBinaryIterative(8) << endl; // expected 1000
    return 0;
}