// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 7 - Problem #1

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream> 
using namespace std; 

class Player
{
    // declare variables that change
    private: 
        string name; 
        double points; 
        
    public: 
        // constructors have same name as the class
        Player(); 
        Player(string name_, double points_); 
        
        // setter functions so that it sets it to something and isn't blank
        void setName(string name_); 
        void setPoints(double points_); 
        
        string getName(); 
        double getPoints(); 
        
}; 

#endif