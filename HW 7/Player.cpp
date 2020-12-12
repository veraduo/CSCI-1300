// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 7 - Problem #1

#include <iostream> 
#include "Player.h"
using namespace std; 

// function without parameters and sets it to a blank
Player::Player()
{
    name = ""; 
    points = 0;
}

// input will be the original variable
Player::Player(string name_, double points_)
{
    name = name_; 
    points = points_; 
}

// sets input to name
void Player::setName(string name_)
{
    name = name_; 
}

// sets input points to points
void Player::setPoints(double points_)
{
    points = points_; 
}

// returns the new name and points
string Player::getName()
{
    return name; 
}
double Player::getPoints()
{
    return points; 
}

