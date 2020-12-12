// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 7 - Problem #2

#include <iostream>
#include <fstream>
#include "Team.h"
#include "Player.h"
using namespace std; 

// sets to zero
Team::Team()
{
    teamName = ""; 
    numPlayers = 0;
}

Team::Team(string teamName_)
{
    teamName = teamName_; 
    numPlayers = 0; 
}

// sets input to teamName
void Team::setTeamName(string teamName_)
{
    teamName = teamName_; 
}

// read roster will put names and points into array
int Team::readRoster(string filename) 
{
    // counter set to zero
    numPlayers = 0;
        
    string playerName;
    
    string strPoints;
            
    double dblPoints;
    
    string line;
    
    int nameLen;
        
    ifstream infile;
    
    infile.open(filename);
    
    // if infile fails to open
    if(infile.fail())
    {
        return -1;
    }
    
    // if file opens
    else
    {
        // reads each line and have number of players less than 50
        while (getline (infile, line) && ( numPlayers < 50 ) )
        {
            // ensures line isn't blank
            if(line != "") 
            {
                nameLen = 0;
                
                playerName = "";
                
                while(nameLen < line.size() && line[nameLen] != ',')
                {
                    playerName = playerName + line[nameLen];
                    nameLen++;
                }
                
                // this will skip over the comma
                strPoints = "";
                nameLen++;
                
                while( nameLen < line.size() ) 
                {
                  strPoints = strPoints + line[nameLen];
                  nameLen++;
                } 
                
                // puts points and names into array
                dblPoints = stod(strPoints);
                
                Player player (playerName, dblPoints);
                
                // this is the array of objects
                players[numPlayers] = player; 
                
                numPlayers++;
            }
        }
    }
    
    return numPlayers;
}

// returns the player name at the given position
string Team::getPlayerName(int pos)
{
    if((pos >= 0) && (pos < numPlayers)) 
    {
    	return players[pos].getName();
    }
    else 
    {
        return "ERROR";
    }
}

// return the points of the player at given position
double Team::getPlayerPoints(int pos) 
{ 
  	if((pos >= 0) && (pos < numPlayers)) 
  	{
      return players[pos].getPoints();
    }
  	else 
  	{
      return -1;
    }
}
  
// returns the number of players
int Team::getNumPlayers() 
{ 
  	return numPlayers;
}

// returns the name of the team
string Team::getTeamName() 
{ 
  	return teamName;
}





