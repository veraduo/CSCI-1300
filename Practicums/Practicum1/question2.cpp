// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Practicum 1 - Question 2

#include <iostream>
using namespace std;

int main()
{

    cout << "Enter Suit: " << endl;
    int suit;
    cin >> suit;

switch (suit)
{

    case 0:
    {
       
        cout << "Suit 0: Clubs" << endl;
        
    }
    break;
    
     case 1:
    {
       
        cout << "Suit 1: Diamonds" << endl;
        
    }
    break;
    
     case 2:
    {
       
        cout << "Suit 2: Spades" << endl;
        
    }
    break;
    
    case 3:
    {
       
        cout << "Suit 3: Hearts" << endl;
        
    }
    break;
    
    default:
    {
        cout << "Suit " << suit << ":" << " Invalid" << endl;
    }
}
return 0;
}


