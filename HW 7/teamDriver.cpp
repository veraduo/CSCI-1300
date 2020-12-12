// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 7 - Problem #2

#include <iostream>
#include "Team.h"
#include "Player.h"
using namespace std; 

int main()
{
        // unit tests for constructors
        Team team1;
        cout << team1.getTeamName() << endl;    //expected empty
        cout << team1.getNumPlayers() << endl;  //expected: 0
        
      	// unit tests for parameterized constructor
        Team team2("Team 2");
        cout << team2.getTeamName() << endl; //expected: Team 2
      
      	// this tests the read roster function
        Team team4("Thats so Ravenclaw");
        cout << team4.getTeamName() << endl;
        
        team4.readRoster("roster1.txt");
        int n4 = team4.getNumPlayers();
        
        for (int i = 0; i < n4; i++) 
        {
            cout << team4.getPlayerName(i) << " ";
            cout << team4.getPlayerPoints(i) << endl;
        }
}
        