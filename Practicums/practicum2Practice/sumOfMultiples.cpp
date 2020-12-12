#include<iostream>
using namespace std;

int sumOfMultiples(int n, int x)
{
    int sum = 0;
    
    for(int i = 0; i <= x; i++)
    {
        if(i % n == 0)
        {
            sum += i;
        }
    }
    
    return sum;
}