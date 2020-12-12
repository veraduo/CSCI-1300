// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 2 - Problem #4

// <cmath> is used since M_PI requires it 
#include <cmath> 
#include <iostream>
using namespace std;

int main()
{

// The user will input a radius after it prints "Enter a radius"
// radius is stored as a double variable so it can have decimals

    cout << "Enter a radius: " << endl;
    double radius;
    cin >> radius;
    
// Here volume and surface area are stored as double variables so it can use decimals
// M_PI is the number pi and the variable radius was saved earlier when the user input their number
    
    double volume = (4.0/3) * M_PI * radius * radius * radius;
    double surface_area = 4.0 * M_PI * radius * radius;

// this prints the answer volume and surface_area calculated from before on two separate lines

    cout << "Volume: " << volume << endl;
    cout << "Surface area: " << surface_area << endl;
    return 0;
}