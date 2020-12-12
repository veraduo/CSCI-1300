// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 3 - Problem #6

#include <iostream>
#include <string>
using namespace std;

int main()
{
// this asks the user to input a number between 1 to 3
    cout << "How personalized should the ad be? (1-3)" << endl;
    int choice;
    cin >> choice;

// switch statement used to make code look cleaner and easier to understand
// it uses the user's input from the cout from above if they want ad choices 1 -3
switch (choice)
{
// for case 1, the first scenario, this is what will happen in the switch statement
    case 1:
    {
        string dog_input;
        cout << "Do you own a dog?" << endl;
        cin >> dog_input;
        
// if the user says yes or Yes, it outputs the ad
// if user says anything other than yes or Yes, it outputs the toothpaste ad

        if (dog_input == "yes" || dog_input == "Yes")
        {
            cout << "Meat's the need of dogs like yours!" << endl;
        }
        else
        {
        cout << "Dirty mouth? Clean it up with new Orbit Raspberry Mint." << endl;
        }
    break;
    }
    
// this is case 2 for the 2nd scenario in the switch statement
    case 2:
    {
        cout << "How many Facebook friends do you have?" << endl;
        int num_friends;
        cin >> num_friends;
        
    // if the number of facebook friends is 500 or more, it outputs the dog service ad
        if (num_friends >= 500)
        { 
            cout << "Don't like cleaning up after your dog? Call Doody Free to sign up for backyard cleanup or dog walking service." << endl;
        }
    // if the number of friends is less than 500, it outputs the shelter ad
        else
        {
            cout << "Who doesn't need another cat? Adopt a shelter pet right meow." << endl;
        }
    break;
    }
    
// this is case 3 for scenario 3 in the switch statement
    case 3:
    {
        cout << "What is your zip code?" << endl;
        int zipcode;
        cin >> zipcode;
        
        cout << "What is your age?" << endl;
        int age;
        cin >> age;
        
        // if the user lives in Boulder with their zipcode between 80301 and 80310 and is 25 or older, it outputs the exercise ad
        if (zipcode >= 80301 && zipcode <= 80310)
        { 
            if (age >= 25)
            {
                cout << "You are surrounded by professional athletes. Up your exercise game in the privacy of your home with a Peloton bike." << endl;
            }
            
        // if the user is in Boulder but is younger than 25, it outputs the Tacos ad
            else if (age < 25)
            {
                cout << "Looking for dinner that won't break the bank? Tacos. Come grab a $3 at Centro Latin Kitchen." << endl;
            }
        }
        // if user is not in Boudler regardless of age, it outputs this ad
        else
        {
            cout << "Feeling Uninspired? The Boulder Flatirons are calling. Come hike to inspiring views, delicious food, and enjoy the hospitality of Boulder, CO." << endl;
        }
    break;
    }

// if the user inputs something thats not 1, 2, or 3, it outputs "invalid option"
    default:
    {
        cout << "Invalid option." << endl;
    }
}

return 0;
}

