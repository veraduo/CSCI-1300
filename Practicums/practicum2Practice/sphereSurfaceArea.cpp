#include<iostream>
#include<cmath>
using namespace std;

void sphereSurfaceArea(double rad)
{
    double vol = 4.0 * M_PI * pow(rad, 2);
    
    cout << "surface area: " << vol << endl;
}