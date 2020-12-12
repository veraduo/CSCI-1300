// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 2 - Problem #3

#include <iostream>
using namespace std;

int main()
{
    
// The user is asked to input the cold temperature which is saved as the variable cold_temp

    cout << "Enter cold reservoir temperature: " << endl;
    int cold_temp;
    cin >> cold_temp;

    cout << "Enter hot reservoir temperature: " << endl;
    int hot_temp;
    cin >> hot_temp;

// carnot_efficiency is a double variable so that it can use decimals
// cold_temp and hot_temp are multiplied by 1.0 because it was initially saved as an int so that it can output a number with decimals

    double carnot_efficiency = 1 - (cold_temp * 1.0 / hot_temp * 1.0);
    
// This will print the answer carnot_efificiency calculated before
    
    cout << "Carnot efficiency: " << carnot_efficiency << endl;
    return 0;
}