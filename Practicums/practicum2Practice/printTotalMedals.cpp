#include <iostream>
#include <string>

using namespace std;

void printTotalMedals(string disciplines[], int gold_medals[], int silver_medals[], int bronze_medals[], int size) 
{
    for(int i = 0; i < size; ++i) 
    {
        cout << disciplines[i] << ": " << gold_medals[i]+silver_medals[i]+bronze_medals[i] << endl;
    }
    
    if(size < 1)
    {
        cout << "Invalid size. Size must be at least 1." << endl;
    }
}

