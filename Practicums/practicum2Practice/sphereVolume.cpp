#include<iostream>
#include<cmath>
using namespace std;

void sphereVolume(double rad)
{
    double vol = (4/3.0) * M_PI * pow(rad, 3);
    
    cout << "volume: " << vol << endl;
}