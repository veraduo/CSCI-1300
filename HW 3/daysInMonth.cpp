// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 3 - Problem #5

#include <iostream>
using namespace std;

int main()
{
    // months are integers
    int month, year, number_days;

    // asks user to enter a specific year and month
    cout << "Enter a year: " << endl;
    cin >> year;

    cout << "Enter a month: " << endl;
    cin >> month;

    // if month is within the range 1 to 12
    if(month >= 1 && month <= 12)
    {
        // month 1 is january which is 31 days
        if(month == 1)
        {
            number_days = 31;
        }
        // if month is 2, things get complicated with leap years
        // if it's divisible by 4 or 400, the number of days is 29
    
        else if(month == 2)
        {
            if((year % 4 == 0 && year % 100 !=0) || year % 400 == 0)
            {
                number_days = 29;
            }
        // however if the year is less than 1582, we only consider if it's divisible by 4
        // must consider Gregorian Calendar
            else if (year < 1582 && year % 4 == 0)
            {
                number_days = 29;
            }
        
            // if it's not a leap year, month 2 is 28 days
            else
            {
                number_days = 28;
            }
        }
        // these else if statements cover the rest of the months and the number of days are in them
        else if(month == 3)
        {
            number_days = 31;
        }
        else if(month == 4)
        {
            number_days = 30;
        }
        else if(month == 5)
        {
            number_days = 31;
        }
        else if(month == 6)
        {
            number_days = 30;
        }
        else if(month == 7)
        {
            number_days = 31;
        }
        else if(month == 8)
        {
            number_days = 31;
        }
        else if(month == 9)
        {
            number_days = 30;
        }
        else if(month == 10)
        {
            number_days = 31;
        }
        else if(month == 11)
        {
            number_days = 30;
        }
        else if(month == 12)
        {
            number_days = 31;
        }
        cout << number_days << " days " << endl;
    }
    // if month is not a number between 1 - 12 it outputs invalid month
    else
    {
        cout << "Invalid month" << endl;
    }

return 0;
}