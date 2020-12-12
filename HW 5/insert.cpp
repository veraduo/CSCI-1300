// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 5 - Problem #3

#include<iostream>
using namespace std;

// this function will allow the user to insert a new number and will sort the array from lowest to highest with the new number added 
// takes the array, the number elements in array, size of array, and the inserted number as parameters
int insert(int array[], int num_in_array, int size, int insert)
{
    
// num_in_array will always be returned if it's bigger than the array size
    if (num_in_array >= size)
    {
        return num_in_array;
    }
    
// we make i and int since we use it outside the for loop
    int i;
    
// we iterate starting from the number of elements in the array until the position i is greater than insert
// subtract 1 since array starts at position 1 but number of elements doesn't - this avoids off by one error
// this allows it to know where to insert the number within the array
    for(i = num_in_array - 1; array[i] > insert; i--)
    {

// in each new position within the array, after each iteration, it becomes the current position i
        array[i + 1] = array[i];
    }
    
// once the for loop finishes, the new array[i+1] is insert which will be the final position of the user's input
    array[i + 1] = insert;
    
// add one since the user input the new element
    return num_in_array + 1;
} 

// this will test if the function is working 
int main()
{
// this is array before the new number is added
    int array[10] = {1,1,3,4,5,5,5,6};
    
// there are 8 numbers in the array
    int num_in_array = 8;
    
    int size = 10;
    
// the new number added is 2
    int newNum = 2;
    
    num_in_array = insert(array, num_in_array, size, newNum);
    
    cout << "after: " << endl;
    
// this will print all the elements of the new array 
    for(int i = 0; i < num_in_array; i++)
    {
        cout  << array[i] << " ";
    }
    
}