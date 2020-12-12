// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 1 - Problem #2

#include <iostream>
using namespace std;

// this function finds the displacement and takes in the initial velocity, final velocity and acceleration
// it returns D, the displacement value from the formulas
double displacement(double I, double F,double a)
{
   double D = 0;
  
// we need to have nested if statements because more than one condition can match each case
// this allows it to output more than one condition 

   if (I < 0 || F < 0)
   {
        cout << "Velocity should be greater than zero." << endl;
            
            if (a == 0)
            {
                cout << "No brakes were applied." << endl;
            }
  
            if (a < 0)
            {
                cout << "The vehicle is speeding up." << endl;
            }
  
            if (F > I)
            {
                cout << "Error in acceleration values." << endl;
            }
   } 
   
//--------------------------------------------------------------------------     
 
// this else if accounts for when a == 0 and the rest falls under that category
   else if (a == 0)
   {
        cout << "No brakes were applied." << endl;

            if (a < 0)
            {
                cout << "The vehicle is speeding up." << endl;
            }
            if (F > I)
            {
                cout << "Error in acceleration values." << endl;
            }
            if (I < 0 || F < 0)
            {
                cout << "Velocity should be greater than zero." << endl;
            }
   }
   
//--------------------------------------------------------------------------------

// this else if accounts for when a < 0
   else if (a < 0)
   {
       cout << "The vehicle is speeding up." << endl;
       
        if (a == 0)
        {
            cout << "No brakes were applied." << endl;
        }
        if (F > I)
        {
            cout << "Error in acceleration values." << endl;
        }
        if (I < 0 || F < 0)
        {
            cout << "Velocity should be greater than zero." << endl;
        }
   }
  
//------------------------------------------------------------------------------------

// this else if accounts for if F > I 
   else if (F > I)
   {
        cout << "Error in acceleration values." << endl;
       
        if (a < 0)
        {
            cout << "The vehicle is speeding up." << endl;
        }
       
        if (a == 0)
        {
            cout << "No brakes were applied." << endl;
        }
        if (I < 0 || F < 0)
        {
            cout << "Velocity should be greater than zero." << endl;
        }
   }
   
// after we've gone through the nested ifs, we have an else that contains the formula for the displacement and returns it at the end 
   else
   {
        D = (F * F - I * I) / (-2 * a);
   }
   
   return D;
}

int main() 
{
  
   double I, F, a;
  
   cout << "Enter initial velocity: " << endl;
   cin >> I;
  
   cout << "Enter final velocity: " << endl;
   cin >> F;
  
   cout << "Enter deceleration: " << endl;
   cin >> a;
  
   if (displacement(I, F, a) > 0)
   {
       
        cout  << "Displacement is " << displacement(I, F, a) << endl;
   
   }
  
   return 0;
}