// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 2 - Problem #6

#include <iostream>
using namespace std;

int main()
{
// this asks the user to input the number of seconds and stores it as an int in num_seconds

    cout << "Enter a number of seconds: " << endl;
    int num_seconds;
    cin >> num_seconds;
    
// the percent symbol is used to take the remainder which is called a mod
// the variables are stored as an int for integer

    int hour = num_seconds / 3600;
    int seconds_remainder = num_seconds%3600;
    
    int minutes = seconds_remainder / 60;
    seconds_remainder = seconds_remainder%60;
    
// this prints the number of hours minutes and seconds that was converted from before using the user's input for seconds

    cout << hour << " hour(s) " << minutes << " minute(s) " << seconds_remainder << " second(s) " << endl;
    return 0;
}