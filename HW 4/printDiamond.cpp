// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 4 - Extra Credit

#include <iostream>
using namespace std;

int main()
{

// declaring variables that will go within for loops

    int i, j, x, space = 1;
  
    cout << "Enter the length:" << endl;
    cin >> x;
    space = x - 1;

// this first for will display the first half of the diamond

    for (i = 1; i <= x; i++)//run the loop till number of rows
    {
        
        for (j = 1; j <= space; j++)
        {
            // this cout makes it so that the stars are aligned and aren't starting all the way to the left
            cout << " ";
        }
        
        // this space-- makes it so that the diamond isnt shifted
        space --;
        
        for(j = 1; j <= 2 * i - 1; j++)
        {
            // this makes the diamond into stars
            cout << "*";
        }
        
    cout << endl;
    
    }
    
// these next for loops will print the rest of the diamond 
// most of these will be similar to the first half except for space++ and space = 1

    space = 1;

    for (i = 1; i <= x - 1; i++)
    {
        
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }
        
        // we add space = space + 1
        space ++;
        
        for (j = 1; j <= 2 * (x - i) - 1; j++)
        {
            cout << "*";
        }
        
    cout << endl;
    
    }
    
    return 0;
}

