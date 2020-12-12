// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 2 - Task #3

#include <iostream> 
#include <fstream>
#include <cmath>
#include <iomanip>
#include "Book.h"
#include "User.h"
#include "Library.h"
using namespace std; 

string toUpper(string input) // this function turns all strings into uppercase
{
    for (int i = 0; i < input.length(); ++i) 
    {
        if (islower(input[i])) 
        {
            input[i] = toupper(input[i]);
        }
    }
    
    return input; // the input is then converted to uppercase
}

Library::Library() // sets everything to zero
{
    numBooks = 0;
    numUsers = 0;
}

int Library::getNumBooks() // next two returns numBooks and numUsers
{
    return numBooks;
}

int Library::getNumUsers()
{
    return numUsers;
}

int Library::readBooks(string filename1) // this function takes in string filename and returns the number of books in books array
{
    string authorName;
    
    string bookTitle;
    
    string line;
    
    int nameLen;
        
    ifstream infile;
    
    infile.open(filename1);
    
    if(infile.fail()) // if infile fails to open
    {
        return -1;
    }
    
    else  // if file opens
    {
        while (getline(infile, line) && numBooks < 50)
        {
            if(line != "") // ensures line isn't blank
            {
                nameLen = 0;
                
                authorName = "";
                
                while(nameLen < line.length() && line[nameLen] != ',') // can't have comma
                {
                    authorName = authorName + line[nameLen];
                    nameLen++;
                }
                
                bookTitle = ""; // this will skip over the comma for next string
                nameLen++;
                
                while( nameLen < line.length() ) 
                {
                  bookTitle = bookTitle + line[nameLen];
                  nameLen++;
                } 
                
                Book book(bookTitle, authorName);
                books[numBooks] = book;  // this is the array of objects
                
                numBooks++;
            }
        }
    }
    
    return numBooks;
}

int Library::readRatings(string filename2) // this function takes in string filename and returns the number of users in users array
{
    ifstream infile;
   
    infile.open(filename2);
   
    if(infile.fail()) // if infile fails to open
    {
        return -1;
    }
   
    else // if file opens
    {
        int countRows = 1;
       
        string line;
       
        while (getline(infile, line) && numUsers < 100) // need getline to read the whole text file and the number of names can't be bigger than array size
        {
            if(line != "") // making sure the line isn't empty
            {
                int nameLen = 0;
               
                string name;
           
                if(countRows % 2 != 0)  // Process names on odd line
                {
                    users[numUsers].setUsername(line);
                }
                else  // Process numbers on even lines
                {
                    char separator = ',';
                   
                    line = line + separator;
                   
                    int length = line.length();
                   
                    string temp = "";
                   
                    int columnsCount = 0;
                   
                    for(int i = 0; i < length; i++) // we iterate while i is less than the length of the line
                    {
                        if(line[i] != separator || line[i] == ' ')
                        {
                            temp = temp + line[i];
                        }
                        else // here we will store number of users in users array with corresponding parameters
                        {
                            if(temp.length() != 0)
                            {
                                users[numUsers].setRatingAt(columnsCount, stoi(temp) );
                               
                                columnsCount++;
                               
                                temp = "";
                            }
                        }
                    }
                numUsers++;
                }
            countRows++;
            }
        }
       
    return numUsers;
    }
}

void Library::viewRatings(string userName, int minRate) // this function prints all the books that the user has rated with a value >= to the minimum rating
{
    string nameUpper = toUpper(userName); // use toUpper function to make usernames match 
    
    if(numBooks != 0 && numUsers != 0)
    {
        int userindex = -1;
        
        for(int j = 0; j < numUsers; j++) // for loop finds the userindex in users array
        {
            string temp = toUpper(users[j].getUsername() );
            
            if(temp == nameUpper)
            {
                userindex = j;
            }
        }
        if(userindex < 0) // username doesn't exist if it doesn't have index in array
        {
            cout << userName << " does not exist." << endl;
        }
        
        else // if index exists
        {
            bool flag = true; // initialize flag to true
            
            for(int i = 0; i < numBooks; i++)
            {
                if (users[userindex].getRatingAt(i) >= minRate)
                {
                    flag = false;
                }
                
            }
            if(flag == true)
            {
                cout << userName << " has not rated any books with " << minRate << " or higher." << endl;
                return;
            }
            else // when flag is false (when rating is >= minRate)
            {
                cout << "Here are the books that " << userName << " rated" << endl;
                for (int i = 0; i < numBooks; i++)
                {
                    if (users[userindex].getRatingAt(i) >= minRate)
                    {
                        cout << "Title : " << books[i].getTitle() << endl;
                        cout << "Rating : " << users[userindex].getRatingAt(i) << endl;
                        cout << "-----" << endl;
                    }
                }
            }
        }
    }
    
    else //when numBooks and numUsers is zero
    {
        cout << "The library has not been fully initialized." << endl;
    }
}  

void Library::printAllBooks() // function prints all books stored in the books array with average ratings
{
    if(numBooks <= 0)
    {
        cout << "The library has not been fully initialized." << endl;
    }
    else // when there are books in the library
    {
        int numRate = 0;
        
        double total = 0;
        
        int rate = 0;
        
        for(int i = 0; i < numBooks; i++) // nested forloops to find index of users and ratings 
        {
            for(int j = 0; j < numUsers; j++)
            {
               rate = users[j].getRatingAt(i);
               
               if(rate > 0) // calculate total 
               {
                   total = total + users[j].getRatingAt(i);
                   numRate++;
               }
            }
           
            string title = books[i].getTitle();
            
            string author = books[i].getAuthor();
            
            double avg = total / numRate * 1.0; // average rating calculation
           
            cout << fixed << setprecision(2) << "(" << avg << ") " << title << " by " << author << endl;
            numRate = 0; // re-initialize to zero
            total = 0;
       }
    }
}

void Library::addUser(string username) // function takes a username and adds a user with that name to the users array
{
    string userUpper = toUpper(username); // usernames match by toUpper
    
    int userindex = -1;
        
    for(int j = 0; j < numUsers; j++) // find userindex
    {
        string temp = toUpper(users[j].getUsername() );
        
        if(temp == userUpper)
        {
            userindex = j;
        }
    }
    
    if (numUsers == 100) // reaches capacity of array
    {
        cout << "The library is already full. " << username << " was not added." << endl;
    }

    else if (userindex != -1) // index doesn't exist in library
    {
        cout << username << " already exists in the library." << endl;
    }
     
    else // add user to users array
    {
        User user1;
        user1.setUsername(username);
        users[numUsers] = user1;
        numUsers++;
        
        cout << "Welcome to the library " << username << endl;
    }
}

void Library::updateRating(string username, string title, int newRate) // Takes username, title, and a new rating, and updates the rating value of this title for this user
{
    string userUpper = toUpper(username); // make usernames match
    
    int userindex = -1;
        
    for(int j = 0; j < numUsers; j++)
    {
        string temp = toUpper(users[j].getUsername() );
            
        if(temp == userUpper)
        {
            userindex = j;
        }
    }
    
    string bookUpper = toUpper(title);
    
    int bookindex = -1;
    
    for(int j = 0; j < numBooks; j++) // make book titles match
    {
        string temp = toUpper(books[j].getTitle() );
            
        if(temp == bookUpper)
        {
            bookindex = j;
        }
    }
    
    if(numBooks == 0 && numUsers == 0) // can't have zero books or users
    {
        cout << "The library has not been fully initialized." << endl;
    }
    else if (userindex == -1) // doesn't exist if index isn't in array
    {
        cout << username << " does not exist." << endl;
    }
    else if (newRate < 0 || newRate > 5)
    {
        cout << newRate << " is not valid." << endl;
    }
    else if(bookindex == -1)
    {
        cout << title << " does not exist." << endl;
    }
    else // edge cases don't apply, so rating updated
    {
        users[userindex].setRatingAt(bookindex, newRate);
        cout << "The rating has been updated." << endl;
    }
} 

void Library::getRecommendations(string username) // Takes the username and prints the first 5 book recommendations. 
{
    string userUpper = toUpper(username); // makes username match
    
    int userindex = -1;
    
    if(numBooks == 0 && numUsers == 0) // nothing in library
    {
        cout << "The library has not been fully initialized." << endl;
        return;
    }
    
    for(int j = 0; j < numUsers; j++) // finds userindex
    {
        string temp = toUpper(users[j].getUsername() );
            
        if(temp == userUpper)
        {
            userindex = j;
        }
    }
    
    if (userindex == -1) // user doesn't exists if index is -1
    {
        cout << username << " does not exist." << endl;
    }
    else
    {
        int simArr[numUsers]; // initialize ssd array
        for(int i = 0; i < numUsers; i++)
        {
            int similarity = 0;
            bool reviewed = false;

            if(userindex != i) // calculates the ssd
            {
                for(int j = 0; j < 50; j++)
                {
                    int a = users[userindex].getRatingAt(j);
                    int b = users[i].getRatingAt(j);
                    
                    similarity += pow((a - b),2);
                    
                    if(b != 0) // makeing sure at least one book has a rating
                    {
                        reviewed = true;
                    }
                }
            }
            
            if(reviewed) // position i in array is ssd score
            {
                simArr[i] = similarity;
            }
            else 
            {
                simArr[i] = 9000;
            }
        }
        
        int smallest = simArr[0]; // set smallest to first value
        int smallestPos = 0;
        
        for(int k = 0; k < numUsers; k++)
        {
            if(simArr[k] < smallest) // setting new smallest ssd to find similarity
            {
                smallest = simArr[k];
                smallestPos = k;
            }
            
        }
        
        int firstFive = 0; // firstFive initiliaze to zero
        
        for(int n = 0; n < 50; n++)
        {
            if(firstFive < 5) // only print first five books
            {
                if(users[smallestPos].getRatingAt(n) >= 3 && users[userindex].getRatingAt(n) == 0) // making sure original user hasn't rated a book yet and new has one >=3
                {
                    if(firstFive == 0)
                    {
                        cout << "Here is the list of recommendations" << endl;
                    }
                    cout << books[n].getTitle() << " by " << books[n].getAuthor() << endl; // print first 5 book recommendations
			        firstFive++;
                }
            }
        }
        
        if(firstFive == 0) // new user doesn't have books rated 3 or above that original user hasn't read yet
        {
            cout << "There are no recommendations for " << username << " at present." << endl;
        }
        
    }
}