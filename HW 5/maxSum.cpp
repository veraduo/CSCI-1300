// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 5 - Problem #4

#include<iostream>
using namespace std;

// before we make the funciton we need to make columns a constant integer that equals 10
const int columns = 10; 

// this function takes a 2D array and finds the greatest value in each row and adds them all up
int maxSum(int array[][columns], int rows)
{
    
// make sum and int and initialize it to zero
    int sum = 0;
    
// we need a nested for loop to go through both rows and columns
    for(int i = 0; i < rows; i++)
    {

// the initial max will have row i and column zero
        int max = array[i][0];
        
// this for loop is for columns
        for(int j = 0; j < columns; j++)
        {
            
// if the array with position i in rows and position j in columns is bigger than the max from before, we take that and make it the new max
            if(max < array[i][j])
            {
                max = array[i][j];
            }
        }
        
// still in the loop, the sum is calculated here
         sum = sum + max;
    }
    
     return sum;
}

// this int main is used to test the funciton
int main()
{
    
// here I specify how large the rows and columns is and put my array in
    int array[2][10] = {
    
    {1, 2, 3, 4, 5, 10, 9, 8, 7, 6},
    {5, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    
    };
    
// this will return my function with my array and it's size specified
    cout << "return value: " << maxSum(array, 2);
}
