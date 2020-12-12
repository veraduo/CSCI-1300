// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 2 - Problem #7


// here I am declaring my variables and saving them as a number so I can put it in my calculations 

#include <iostream>
#define births 8
#define deaths 12
#define immigrants 27
#define seconds_per_day 86400

using namespace std;

int main()
{

// this asks the user to input the current population which is then stored as an int

cout << "Enter the current population: " << endl;
    int population;
    cin >> population;
    
// for the calculations, I used the variables I defined from before 
// these variables are then stored as an int

int births_per_day = seconds_per_day / births; 

int immigrants_per_day = seconds_per_day / immigrants;

int deaths_per_day = seconds_per_day / deaths;

int total_population = ((births_per_day + immigrants_per_day - deaths_per_day) * 365) + population;

// this prints the population in one year based off the calcualtions from before in the variable total_population

cout << "The population in one year: " << total_population << endl;

return 0;
}