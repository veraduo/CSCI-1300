// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 2 - Task #3

#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream> 
#include "Book.h"
#include "User.h"
using namespace std;

class Library
{
    private:  // private variables
    
        Book books[50];
        User users[100];
        int numBooks;
        int numUsers;
    
    public: // public member functions and constructor
    
        Library();
        
        int getNumBooks();
        int getNumUsers();
        
        int readBooks(string filename1);
        int readRatings(string filename2);
        
        void viewRatings(string, int);
        
        void printAllBooks();
        
        void addUser(string);
        
        void updateRating(string, string, int);
        
        void getRecommendations(string);
        
};

#endif