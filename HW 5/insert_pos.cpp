// NOT PART OF HW 5 - JUST MESSING AROUND
#include<iostream>
using namespace std;

int insert(int array[], int numElements, int size, int insert, int pos)
{
    int i;
    
    for(i = numElements - 1; i > pos; i--)
    {
        array[i + 1] = array[i];
    }
    
    array[i + 1] = insert;
    
    return numElements + 1;
} 

int main()
{

    int array[10] = {1,1,3,4,5,5,5,6};
    
    int numElements = 8;
    
    int size = 10;
    
    int insert = 2;
    
    numElements = insert(array, numElements, size, insert);

    int pos = 2;
    
    cout << "after: " << endl;
    
// this will print all the elements of the new array 
    for(int i = 0; i < numElements; i++)
    {
        cout  << array[i] << " ";
    }
    
}