// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 4 - Problem #1

#include <iostream>
using namespace std;


int main()
{  
	
// i and sum need to be initialized to zero
	int i = 0;
	int sum = 0;

// the user is asked to enter a positive number
	cout << "Enter a positive number: " << endl;
	int num;
	cin >> num;
	
// since we need to sum all the even numbers less than num, i starts at 2 the first even number
// it loops until i is less than or equal to the user's input
// added i + 2 to sum the even numbers

	for(i = 2; i <= num; i = i + 2)  
    {
    	sum = sum + i;    	      
    }
		  
// outputs the sum of even numbers based off user's input 
    	cout << "Sum: " << sum << endl;
    
	return 0;
}
