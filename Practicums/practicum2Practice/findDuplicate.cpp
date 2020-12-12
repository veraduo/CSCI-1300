#include<iostream>
using namespace std;

void findDuplicate(int arr[], int size)
{
    for(int i = 0; i < size; i++) 
    {
        for(int j = i + 1; j < size; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                cout << arr[i] << endl; 
                return;
            }
        }
    }
    
    cout << -1 << endl;
}