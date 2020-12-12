// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 3 - Problem #3

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// This asks the user to enter their number of sushi and stores it as a float
    cout << "Enter the number of sushi: " << endl;
    float number_sushi;
    cin >> number_sushi;
    
// Here are the calculations for the discount for each range of sushi
    double price = number_sushi * 1.99;
    double price_10 = (number_sushi * 1.99) * 0.90;
    double price_15 = (number_sushi * 1.99) * 0.85;
    double price_20 = (number_sushi * 1.99) * 0.80;
    double price_25 = (number_sushi * 1.99) * 0.75;

// sushi cant be negative or zero
    if (number_sushi < 0)
    {
        cout << "Invalid input" << endl; 
    }
    else if (number_sushi == 0) 
    {   
        cout << "Invalid input" << endl; 
    }

// if sushi is within the ranges stated in the condition for the else if, it outputs the correct discount that was calculated above
// setprecision(2) used so it is accurate with USD

    else if (number_sushi >= 10 && number_sushi <= 19) 
    {   
        cout <<"Total price: $" << fixed << setprecision(2) << price_10 << endl; 
    }
    else if (number_sushi >= 20 && number_sushi <= 49 ) 
    {   
        cout <<"Total price: $" << fixed << setprecision(2) << price_15 << endl;
    }
    else if (number_sushi >= 50 && number_sushi <= 99 ) 
    {   
        cout <<"Total price: $" << fixed << setprecision(2) << price_20 << endl;
    }
     else if (number_sushi>= 100) 
    {   
        cout <<"Total price: $" << fixed << setprecision(2) << price_25 << endl;
    }
    
// this else is meant for sushi less than 10

     else
    {   
        cout <<"Total price: $" << fixed << setprecision(2) << price << endl; 
    }
return 0;
}