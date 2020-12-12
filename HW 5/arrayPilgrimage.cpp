// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 5 - Problem #1

#include<iostream>
using namespace std;

int main()
{
    
// we make the temp an array that holds 10 spots
    double temp[10];
    
// we make colors an array that holds 5 colors
    string colors[5] = {"Red", "Blue","Green","Cyan","Magenta" };
    
// sequence array will hold the first 100 numbers
    int sequence[100];
    
// uppercase and lowercase letters have 52 spots in the letters array
    char letters[52];

// in order to print -459.67 10 times, we put it in a for loop 
    for(int i = 0; i < 10; i++)
    {
        temp[i] = -459.67;
        
// endl; to make sure it doesn't print horizontally
        cout << temp[i] << endl;
    }
    
    cout << endl;
    
// for the colors, we do the same as the temp in the for loop except i < 5
    for(int i = 0; i < 5; i++)
    {
        cout << colors[i] << endl;
    }
    
    cout << endl;
    
// a for loop for the first 100 numbers in the sequence array 
// sequence[i] will then equal i + 1 to add 1 to each iteration 
    for(int i = 0; i < 100; i++)
    {
        sequence[i] = i + 1;
        
        cout << sequence[i] << endl;
        
    }
    
    cout << endl;
    
// count wil keep track of each new letter
    int count = 0;
    
// we iterate i < 52 since lowercase + uppercase = 52
    for(int i = 0; i < 52; i = i + 2)
    {
// we will start at big letter A and count is for the next letter B and so on
        letters[i] = 'A' + count;
        
// leters[i] + 32 will add on a lowercase letter with the uppercase one since the difference on the ascii table is 32
        letters[i + 1] = letters[i] + 32 ; 
        
// add one to count for the next letter in the alphabet
        count++;
        
// print the uppercase letter next to the lowercase letter
        cout << letters[i] << " " << letters[i + 1] << endl;
    }

    return 0;
    
} 