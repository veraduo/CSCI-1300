// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 7 - Problem #1

#include <iostream>
#include "Player.h"
using namespace std; 

int main()
{
    
    // unit tests for constructors
    Player Person1; 
    cout << Person1.getName() << endl;      // expected: empty 
    cout << Person1.getPoints() << endl;    // expected: 0 
    
    // unit tests for parameterized constructor
    Player Hector("Hector", 6.2); 
    cout << Hector.getName() << endl;      // expected: Hector
    cout << Hector.getPoints() << endl;    // expected: 6.2 
    
    // unit tests for setters 
    Player Stella; 
    Stella.setName("Stella");
    Stella.setPoints(13.1);
    cout << Stella.getName() << endl;      // expected: Stella
    cout << Stella.getPoints() << endl;    // expected: 13.1
     
}




