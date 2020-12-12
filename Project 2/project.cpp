// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 2 - Task 4

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Library.h"
#include "User.h"
#include "Book.h"
using namespace std;

int main() // int main is where the user can pick from the menu and call upon functions from library class
{
    int option;
    
    Library library; // make instance of Library class

    while (option != 8) // when option is not 8, the program will enter a loop and will continue to ask the user to pick an option until 8 is picked
    {
        cout << "Select a numerical option: " << endl;
        cout << "======Main Menu=====" << endl;
        cout << "1. Read books\n2. Read ratings\n3. View ratings\n4. Print all books\n5. Update a rating\n6. Add a user\n7. Get recommendations\n8. Quit" << endl;
        cin >> option;
    
        switch(option)
        {
            case 1:
            {
                cout << "Enter a book file name: " << endl;
                string filename;
                cin >> filename;
                
                ifstream infile; 
                
                infile.open(filename);
    
                if(infile.fail())
                {
                    cout << "No books saved to the library." << endl;
                }
                else
                {
                    cout << "Total books in the library: " << library.readBooks(filename) << endl; // call upon readBooks() to print total books in library
                }
                
                break;
            }
            
            case 2:
            {
                cout << "Enter a user file name: " << endl;
                string filename;
                cin >> filename;
                
                ifstream infile; 
                
                infile.open(filename);
    
                if(infile.fail())
                {
                    cout << "No users saved to the library." << endl;
                }
                else
                {
                    cout << "Total users in the library: " << library.readRatings(filename) << endl; // call upon readRatings(filename) to print users in library
                }
                break;
            }
            
            case 3: // prints books with minimum rating user put in 
            {
                cout << "Enter a user name: " << endl;
                string userName;
                cin >> userName;
                cout << "Enter a minimum rating:" << endl;
                int minRate;
                cin >> minRate;
                library.viewRatings(userName, minRate); // call upon viewRatings function
                break;
            }
            
            case 4: 
            {
                library.printAllBooks(); // function prints all books stored in the books array with average ratings
                break;
            }
            
            case 5: // has three parameters: username, title, and new rating
            {
                cout << "Enter a user name: " << endl;
                string username;
                cin >> username;
                
                cout << "Enter a book title:" << endl;
                string title;
                cin.ignore();
                getline(cin, title);
                
                cout << "Enter a new rating:" << endl;
                int rate;
                cin >> rate;
                
                library.updateRating(username, title, rate); // updates ratings in array using updateRating function
                break;
            }
            
            case 6:
            {
                cout << "Enter a user name:" << endl;
                string username;
                cin >> username;
                
                library.addUser(username); // takes a username and adds a user with that name to the users array
                break;
            }
            
            case 7:
            {
                cout << "Enter a user name:" << endl;
                string username;
                cin >> username;
                
                library.getRecommendations(username); // gives the user first 5 book recommendations
                break;
            }
            
            default: // if the user enters a number not within the options, it prints Invalid option and if they pick 8 it will quit
            {
                if (option == 8)
                {
                    cout << "Good bye!" << endl;
                }
                else if (option != 1 || option != 2 || option != 3 || option != 4 || option != 5 || option != 6 || option != 7)
                {
                    cout << "Invalid option." << endl;
                }
                break;
            }        
        
        }
    
    }
    
}