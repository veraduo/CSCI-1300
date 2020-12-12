// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 7 - Problem #2

#ifndef TEAM_H
#define TEAM_H

#include <iostream> 
#include "Player.h"
using namespace std; 

class Team
{
    // private class has variables that will be used 
    private: 
        string teamName; 
        Player players[50]; 
        int numPlayers; 
        
    // public will contain all the member functions
    public: 
        Team();
        Team(string teamName_); 
        
        void setTeamName(string teamName_); 
        
        int readRoster(string filename);
        
        string getPlayerName(int);
        
        double getPlayerPoints(int);
        
        int getNumPlayers();
        
        string getTeamName();
        
}; 

#endif