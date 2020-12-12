// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 2 - Task #2

#ifndef USER_H
#define USER_H

#include <iostream> 
using namespace std; 

class User
{
   private: // priviate variables 
   
      string username;
      int ratings[50];
      int size;

   public: // public member functions
 
       User();
       
       string getUsername();
       
       void setUsername(string);
       
       int getRatingAt(int);
       
       bool setRatingAt(int,int);
       
};

#endif