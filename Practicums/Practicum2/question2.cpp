// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Practicum 2 - Question 2

#include <iostream>
using namespace std;

void printSeriesSkipFour(int maxValue)
{
    int result = 0;
    
    //int i = 1;
    //while (i <= maxValue)
    for(int i = 1; i <= maxValue; i++)
    {
        
        if (i == 1)
        {
            result += i;
            cout << i;
            
        }
        
        else if (i % 4 != 0)
        {
            // If the number is not divisible by 4, add it to sum and print
          result += i;
          cout << " + " << i;
           
        }
        
        else 
        {
            // Print 0 when number is divisible by 4
            cout << "0";
        }
        if (i != maxValue)
        {
            // This check is added to not print the last '+'
            cout << " + ";
        }
        
        i++;
    }
    
    cout << endl;
    cout << "Result of the series is " << sum << endl;
}

// other question

void printSeriesMinusThree(int n)
{
    int result = 0;
    
    for(int i = 1; i <= n; i++)
    {
        if(i==1)
        {
            // adding for the first num
            result += i;
            cout << i;
        }
        
        else if (i % 3 != 0)
        {
            // if the number is not divisible by 3, add it to the sum and print
            result += i;
            cout << "+" << i;
        }
        
        else
        {
            // num divisible by 3, get subtracted from result
            result -= i;
            cout << "-" << i;
        }
    }
    
    cout << endl << "Result of the series is: " << result << endl;
}

// change to while
void printSeriesMinusThree(int n)
{
    int result = 0;
    int i = 1;
    
    while( i <= n)
    {
        if(i==1)
        {
            // adding for the first num
            result += i;
            cout << i;
            i++;
        }
        
        else if (i % 3 != 0)
        {
            // if the number is not divisible by 3, add it to the sum and print
            result += i;
            cout << "+" << i;
            i++;
        }
        
        else
        {
            // num divisible by 3, get subtracted from result
            result -= i;
            cout << "-" << i;
            i++;
        }
    }
    
    cout << endl << "Result of the series is: " << result << endl;
}