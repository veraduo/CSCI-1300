// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 2 - Task #1

#ifndef BOOK_H
#define BOOK_H

#include <iostream> 
using namespace std; 

class Book
{
    private: // private variables title and author
    
        string title; 
        string author;
        
    public: // public member functions
    
        Book(); 
        Book(string title_, string author_);
        
        string getTitle();
        string getAuthor();
        
        void setTitle(string);
        void setAuthor(string);
        
}; 

#endif