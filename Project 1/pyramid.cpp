// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 1 - Problem #1

#include <iostream> 
#include <cmath>  	
using namespace std; 

// function surfaceArea will take base_length and slant_height as double inputs from the user
// this function finds the area of a pyramid and returns the area based off the formula
double surfaceArea(double base_length, double slant_height)
{
 
// base length and the height can't be a negative number, so if it's less than zero the function will return -1
// in the int main() if area is less than one it will output invalid value
	if (base_length < 0 || slant_height < 0)
	{
	return -1; 
	}
	
// this is the formula to find the area of a pyramid
// we use the function pow to take base_length to the power of 2
// once everything is executed we should return the area value
	double area = (2 * base_length * slant_height) + pow(base_length, 2);
	return area; 
	
}

int main()
{

    cout << "Enter the base length: " << endl;
    double base_length; 
    cin >> base_length;

	cout << "Enter the slant height: " << endl; 
	double slant_height;
	cin >> slant_height;

	double area = surfaceArea(base_length, slant_height);
	
	if (area >= 0)
	{
		cout << "The surface area: " << surfaceArea(base_length, slant_height) << endl;
	}
	
	else
	{
		cout << "Invalid values" << endl;
	}
}


