// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Practicum 2 - Question 3

#include <iostream>
using namespace std;

void printAbnormalHeartRates(string patients[], int heart[], int size)
{
    for(int i = 0; i < size; ++i) 
    {
        if(heart[i] < 70 || heart[i] > 190)
        {
            cout << patients[i] << " " << heart[i] << endl;
        }
    }
}


