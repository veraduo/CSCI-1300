// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 3 - Problem #4

#include <iostream>
using namespace std;

int main()
{
    
// Here the user is asked to enter three weights with spaces in between
// each weight is stored as a variable in cin >>

    cout << "Enter boxers' weights " << endl;
    int weight1;
    int weight2;
    int weight3;
    cin >> weight1 >> weight2 >> weight3;

// to determine if it's ascending, descending, or neither, if statements are used to show if weights are less than or greater than to
// determine if they are ascending or descending 

 if (weight1 > weight2 && weight2 > weight3)
    {
        cout << "Descending order" << endl; 
    }
else if (weight1 < weight2 && weight2 < weight3)
    {
        cout << "Ascending order" << endl; 
    }
else
    {
        cout << "Neither" << endl;
    }

 return 0;
}