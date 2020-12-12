// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 4 - Problem #6

#include <iostream>
// cstdio allows me to use printf
// #include  <cstdio>
using namespace std;

int main()
{
     
    int n = 0;
    
// user will enter height of triangle

    cout << "Enter the height:" << endl;
    int height;
    cin >> height;

    // we start the for at the height the user input, such as a height of 4
    // this is for rows, each row will "subtract" a character when i is greater than 1 row then  we do i--
    
    for(int i = height ; i >= 1; i--) 
    // for(int i = 1; i <= height; i++) ---- do this to reverse triangle
    {
        //here we will iterate through upto i value for characters or letters
        
        for(int j = 1; j <= i; j++) 
        {
            // %c just reads the number of characters you specify, regardless of whether they’re empty spaces or not
            // the 97 comes from ASCII 'a' = 97
            // 26 comes from the 26 letters in the alphabet 
            //if k crosses 26 then we take a remainder using a mod and add to ascii of 'a'
            
            // printf("%c" , (n % 26) + 97); 
            cout << char((n % 26) + 97);
            
            n++;
        }
    
    cout << endl;
    }

return 0;
}