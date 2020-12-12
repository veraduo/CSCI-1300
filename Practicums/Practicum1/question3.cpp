// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Practicum 1 - Question 3

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << "Enter first number: " << endl;
    double first;
    cin >> first;
    
    cout << "Enter second number: " << endl;
    double second;
    cin >> second;
    
    cout << "Enter third number: " << endl;
    double third;
    cin >> third;


 if (first > second && first > third)
    {
        cout << "The largest number is " << first << endl; 
    }
else if (first < second && third < second)
    {
        cout << "The largest number is " << second << endl; 
    }
else if (first < third && second < third)
    {
        cout << "The largest number is " <<  third << endl; 
    }

else if (first == second && second > third)
    {
        cout << "The largest number is " <<  first << endl; 
    }
else if (second == third && third > first)
    {
        cout << "The largest number is " <<  third << endl; 
    }
else if (second == third && third > first)
    {
        cout << "The largest number is " <<  first << endl; 
    }
else if (first == third && third > second)
    {
        cout << "The largest number is " <<  first << endl; 
    }
else if (first == second && second == third && third == first)
{
        cout << "The largest number is " <<  first << endl; 
}

 return 0;
}
