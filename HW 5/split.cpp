// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 5 - Problem #6

#include<iostream>
using namespace std;


// this function will return the number of positions are between the separators the user inputs and print them separately 
int split(string input, char separator, string array[], int size)
{

// count will be the index to keep track of the stuff between the separators
    int count = 0;
    
// we need to include the separator with the string input
    input = input + separator;
    
    int length = input.length();
    
// we need to have a temporary word 
    string temp = "";
    
    for(int i = 0; i < length; i++)
    {

// if the input at positon i is not the same as the separator, the temp word will be added to whatever was at positon i 
        if(input[i] != separator)
        {
            temp = temp + input[i];
        }
        
// if the temp word is not empty and if the count or index is greater than the size of the array, we return -1 since it's an error
        else
        {
            if(temp.length() != 0)
            {
            
                if(count >= size)
                {
                    count = -1;
                    return count;
                }
            
// the array at position the index is added is the new temporary word
                else
                {
                    array[count++] = temp;
                
                    temp = "";
                }
            }
        }
    }
    
// we then return count which is the array at that positon without the separator and word at that positon
    return count;
    
}

// int main to test function
int main() 
{         

// test with this string input
    string input = "ABCD EFG";  
    
// separator is a space
    char separator = ' ';  
    
    string array[10];    
    
// we make output equal to the function with all of its parameters
    int output = split(input, separator, array, 10);     
    
    cout << "Result is " << output << endl;         
    
// for loop outputs array on each line
    for (int count = 0; count < 10; count++)              
    {
        cout << array[count] << endl;   
    }
    
    return 0; 
    
}