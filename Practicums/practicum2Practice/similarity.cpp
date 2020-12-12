#include<iostream>
using namespace std;

int similarity(int arr1[], int size1, int arr2[], int size2)
{

    if(size1 == size2)
    {
        for(int i = 0; i < size1; i++)
        {
            if(arr1[i] != arr2[i])
            {
                return false;
            }
            
        }
        
        return true;
    }
    
    else
    {
        return false;
    }
}