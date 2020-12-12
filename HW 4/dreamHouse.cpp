// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 4 - Problem #4

#include <iostream> 
using namespace std; 

int main()
{  

// variables need to be declared and initialized

	double monthly_salary;
// savings starts at zero
	double savings = 0; 
	double down_payment;
	int time = 0;
   
// user is asked for their annual salary, the percent of their salary to save, and the cost of their dream home
	cout << "Enter your annual salary: " << endl;
	double salary;
	cin >> salary;
	
	cout << "Enter the percent of your salary to save, as a decimal: " << endl;
	double percent_save;
	cin >> percent_save;
	
	cout << "Enter the cost of your dream home: " << endl;
	double cost_home;
	cin >> cost_home;
	
//calculating monthly salary
	monthly_salary = salary / 12;
	
	down_payment = 0.25 * cost_home;
   
// this loop will run untill savings become greater than downPayment.
// In each loop iteration (after 1 month), savings is increased by investment returns = (savings*0.04)/12, followed by monthly_savings = save_percent * monthly_salary.
//When savings become greater than down_payment, loop condition becomes false time in months is displayed.
	while (savings < down_payment)
	{
// here is the increased time in months
		time++;
// here is the added investment return
		savings = savings + ( savings * 0.04) / 12; 
// here is the added monthly savings
		savings = savings + (percent_save * monthly_salary); 
	}
   
   cout << "Number of months: " << time;
   
   return 0;
}