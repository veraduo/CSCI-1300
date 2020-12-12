// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 7 - Problem #1

#include <iostream> 
#include "Player.h"
#include"Team.h"
using namespace std;

// this function determines the results of a game given the teams
string game(Team team1, Team team2)
{

    double sum1 = 0;
    double sum2 = 0;
    
    // To determine the winning team, add up the points associated with each team’s first 4 players
    // so num players has to be at least 4
    if(team1.getNumPlayers() >= 4 && team2.getNumPlayers() >= 4)
    {
        for(int i = 0; i < 4; i++)
        {
            sum1 = sum1 + team1.getPlayerPoints(i);
            
            sum2 = sum2 + team2.getPlayerPoints(i);
        }
        
         // if the sum for associated team is bigger than the other, than that team wins
        if(sum1 < sum2)
        {
            return team2.getTeamName();
        }
        
        else if(sum1 > sum2)
        {
            return team1.getTeamName();
        }
        
        // if the sum is equal, return draw
        else
        {
            return "draw";
        }
    }
    
    // if none of the above applies, then the game is a forfeit
    else
    {
        return "forfeit";
    }
}

// this main tests the function
// team Seg Faultline is the expected winner out of Team Main
int main()
{
    
    Team team1("Seg Faultline");
    team1.readRoster("roster1.txt");
    Team team2("Team Main");
    team2.readRoster("roster2.txt");
    string winner = game(team1, team2);
    cout << "The winner is: " << winner << endl;

}