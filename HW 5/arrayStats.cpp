// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 5 - Problem #2

#include<iostream>
#include<iomanip>
using namespace std;

// stats will be a void function since it's not returning a value
// this function will take an array and it's size and find the minimum value, max, and average of the array
void stats (double array[], int size)
{

// the min, max, and sum must be initialized to zero and are all doubles (array is at position zero)
    double min = array[0];
    
    double max = array[0];
    
    double sum = 0;
    
// this for loop starts at 0, iterates while i is less than the size of the array
    for (int i = 0; i < size; i++)
    {
    
// if the position i in the array is less than min at position zero in the array (from before) the new min is the array at pos i
        if (array[i] < min)
        {
            min = array[i];
        }
        
// same here with max, if the max at position i is bigger than pos zero from before than it will be replaced
        if (array[i] > max)
        {
            max = array[i];
        }
        
// the sum calculation
        sum = sum + array[i];
    }
    
// we take the sum and divide it by the size to find the average value 
    double avg = sum / size;
    
// use setprecion(2) to get to 2 decimal places
    cout << "Min: " << fixed << setprecision(2) << min << endl;

    cout << "Max: " << fixed << setprecision(2) << max << endl;

    cout << "Avg: " << fixed << setprecision(2) << avg << endl;
    
}

// this int main() will test the function to make sure it works
int main()
{
    
    double array[] = {10.4, 3.2, 1.4, 5.1, 6.7};
    
    stats (array, 5);
}


