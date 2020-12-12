// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 5 - Problem #5

#include <iostream>
#include <vector>
using namespace std; 

int main()
{

// our vector which holds integer will be called values
    vector<int> values;
    
// the user will enter their input
    cout << "Please enter a number: " << endl;
    int input;
    cin >> input;
    
// this loop will continue as long as the user doesn't enter -1 which terminates the loop
    while (input != -1)
    {
        if (values.size() == 0)
        {
            values.push_back(input);
        }
    
// if the value is divisible by 5 the first value in the vector is erased 
        else if (input % 5 == 0)
        {
    
// erase will delete a value (must be specified at the beginning)
            values.erase(values.begin() );
        }
        
// if the input is divisible by 3 pop_back will remove the element at the end
        else if (input % 3 == 0)
        {
            values.pop_back();
        }
        
// otherwise the input will be added to the vector
        else
        {
            values.push_back(input);
        }
        
// the loop will continue to ask the user to input a number as long as it's not negative 1
        cout << "Please enter a number: " << endl;
        cin >> input;
    }
    
    cout << "The elements in the vector are: " ;
    
// this for loop will go through all the values at a specific position and print it on one line
    for (int i = 0; i < values.size(); i++)
    {
        cout << values.at(i) << " " ;
    }
    
// to find the min and max we first initialize the variables at position zero
    int min = values[0];
    int max = values[0];
    
// for max values at positon i will be greater than max
    for (int i = 0; i < values.size(); i++)
    {
        if (values[i] > max)
        {
            max = values[i];
        }
    }
    
// for min values at positon i will be less than min
    for (int i = 0; i < values.size(); i++)
    {
        if (values[i] < min)
        {
            min = values[i];
        }
    }

    cout << endl;
    
// this will print the min and max in the vector
    cout << "Min = " << min << endl;
    
    cout << "Max = " << max << endl;
    
}
    