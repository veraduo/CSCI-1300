// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 2 - Task #2

#include <iostream> 
#include "User.h"
using namespace std; 

User::User() // sets everything to zero, but size will always be 50
{
    username = "";
    size = 50;
    
    for (int i = 0; i < size; i++)
    {
       ratings[i] = 0;
    }
}

void User::setUsername(string username_) // sets username
{
    username = username_;
}

bool User::setRatingAt(int index, int value) // If the index and the rating are valid, assign the rating at the index and returns true.
{
    if (index >= 0 && index < 50 && value >= 0 && value <= 5)
    {
        ratings[index] = value;
        return true;
    }
    
    else
    {
        return false;
    }
}

string User::getUsername() // Returns the username.
{
    return username;
}

int User::getRatingAt(int index) // Returns the rating at a given index.
{
    if (index >= 0 && index < 50)
    {
       return ratings[index];
    }
    
    else
    {
        return -1;
    }
}
