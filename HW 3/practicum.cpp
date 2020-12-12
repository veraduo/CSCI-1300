// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 3 - Problem #1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// Each of these "cout" will ask for each practicum score and store the input in cin >> as variable score_1 etc.
    cout << "Enter practicum 1 score: " << endl;
    int score_1;
    cin >> score_1;
    
    cout << "Enter practicum 2 score: " << endl;
    int score_2;
    cin >> score_2;
    
    cout << "Enter practicum 3 score: " << endl;
    int score_3;
    cin >> score_3;
    
// average score will be doubled so it can hold decimals, but since scores are an int we need to divide by 3.0
    double average_score = ( score_1 + score_2 + score_3 ) / 3.0;
    
// This cout will output the practicum average within 2 decimal places using setprecision(2)
cout <<"Practicum average: " << fixed << setprecision(2) << average_score << endl;

// This if statement shows that if your average is less than 67 it will output that you can retake practicums
    if (average_score < 67)
    {
        cout << "You can retake practicums during the final." << endl; 
    }
    
// if your score is including and above 67, it will output that you have a passing average
    else
    {
        cout << "You have a passing practicum average. " << endl;
    }
return 0;
}