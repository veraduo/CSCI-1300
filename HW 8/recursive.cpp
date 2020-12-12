// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 8 - Problem #2
#include <iostream>
#include <string>
using namespace std;

string decimalToBinaryRecursive(int n) // converts a decimal value to binary using recursion. Function takes in pos int and returns a string corresponding to the binary representation of the given value
{
   if(n == 0) // 0 in binary is just 0
   {
      return "0";
   } 
    
   else // n that's not zero
   {
      string str;
        
      if (n % 2 == 0) // if divisible by 2, string is 0
      {
         str = "0";
      } 
      else // if you divide by 2 and it has a remainder, string is a 1
      {
         str = "1";
      }

      return decimalToBinaryRecursive(n / 2) + str; // when using recursion, we call upon the function within the function and we continue to add each new string 
   }
}

int main() 
{
    cout << decimalToBinaryRecursive(5) << endl; // expected 101
    cout << decimalToBinaryRecursive(8) << endl; // expected 1000
    return 0;
}