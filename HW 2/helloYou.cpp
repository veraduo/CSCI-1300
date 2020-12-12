// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 2 - Problem #2

#include <iostream>
using namespace std;

int main()
{
    
// This prints the phrase that's in quotation marks which asks you to input your name, and your input will be saved as a varible with name_input

    cout << "Enter your name:" << endl;
    char name_input[80];
    cin >> name_input;
    
// This will print your name that you entered with cout above using the variable your name is saved as

    cout << "Hello, " << name_input << "!" << endl;
    return 0;
}