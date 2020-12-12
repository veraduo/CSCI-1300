// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 2 - Task #1

#include <iostream> 
#include "Book.h"
using namespace std; 

Book::Book() // setting title and author to empty strings
{
    title = "";
    author = "";
}

Book::Book(string title_, string author_) // user input parameters set 
{
    title = title_;
    author = author_;
}

string Book::getTitle()
{
    return title;
}

string Book::getAuthor()  
{
    return author;
}

void Book::setTitle(string title_) // void functions set user input to title and author
{
    title = title_;
}

void Book::setAuthor(string author_) 
{
    author = author_;
}


