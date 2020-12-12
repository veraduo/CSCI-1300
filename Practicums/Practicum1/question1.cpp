// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Practicum 1 - Question 1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Enter the dealer score: " << endl;
    double dealer;
    cin >> dealer;
    
    cout << "Enter the player score: " << endl;
    double player;
    cin >> player;
    
    cout << "Enter the value of the bet: " << endl;
    double bet;
    cin >> bet;
    
    double payout = ((player - dealer) * bet) / 2.0;
  
    if (player <= dealer )
    {
        cout << "The amount paid out is: 0" << endl;

    }
    
    else if (player > dealer)
    {
        cout << "The amount paid out is: " << payout << endl;
    }

}
