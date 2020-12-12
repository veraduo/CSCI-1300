// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 3 - Problem #2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// cout will ask user to enter their hours worked as well as their pay rate
// float used for storage efficiency since it holds less decimal places

    cout << "Enter the number of hours worked " << endl;
    float hours_worked;
    cin >> hours_worked;
    
    cout << "Enter an hourly pay rate " << endl;
    float pay_rate;
    cin >> pay_rate;
    
// pay_check and overtime_pay are doubles so it can hold decimal places for one's paycheck
    double pay_check  = hours_worked * pay_rate;
    double overtime_pay = (hours_worked - 40) * 1.5 * pay_rate + (40 * pay_rate);

// first condition is if hours worked is greater than 40 it outputs overtime_pay that was calculated from above

    if (hours_worked > 40)
    {
        cout <<"Paycheck: " << fixed << setprecision(2) << overtime_pay << endl; 
    }
    
// cant have less than zero for hours worked 

    else if (hours_worked < 0) 
    {   
        cout << "Invalid input" << endl;
    }

// cant have less than zero for pay rate

    else if (pay_rate < 0) 
    {   
        cout << "Invalid input" << endl;
    }
    
// this else is for if hours worked is 40 hours or less, which is the normal paycheck not overtime pay

    else
    {
        cout <<"Paycheck: " << fixed << setprecision(2) << pay_check << endl;
    }
return 0;
}