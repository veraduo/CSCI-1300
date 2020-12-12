// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Practicum 2 - Question 1

#include<iostream>
#include<cmath>
using namespace std;

double coneVolume(double rad, double height)
{
    if(rad < 0 || height < 0)
    {
        return -1;
    }
    
    double vol = M_PI * pow(rad, 2) * (height / 3.0);
    
    // cout << "volume: " << vol << endl;
    return vol;
}

