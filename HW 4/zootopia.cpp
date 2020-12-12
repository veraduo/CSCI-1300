// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 4 - Problem #3

#include<iostream>
using namespace std;

int main()
{
    int animal;
    
    // option 4 is quit, so we do while loop when it's any option except 4
    while (animal != 4 )
    {
        // these cout lines shows the menu options for the user
        cout << "Select a numerical option: " << endl;
        
        cout << "=== menu === " << endl; 
        
        // /n will seperate the animal options which will then be stored in cin >> animal
        cout<<"1. Fox\n2. Bunny\n3. Sloth\n4. Quit" << endl;
        cin >> animal;
        
        // hirescore needs to be initialized to zero, and the rest are variables that are doubles
        double hireScore = 0;
        double agility;
        double strength;
        double speed; 
        
        //switch statements for each animal are used 
        switch(animal)
        {
            
            // case 1 is for the fox
            // user is asked for ability and strength values which will be in calculations for hirescore
            case 1 : 
            {
                // speed is zero becuase it's not used for the fox
                speed=0;  
                
                cout<<"Enter agility: " << endl;
                cin >> agility;
                
                cout << "Enter strength: " << endl;
                cin >> strength;
                
                hireScore = (1.8 * agility) + (2.16 * strength) + (3.24 * speed);
                     
                cout << "Hire Score: " << hireScore << endl;
                
                // can't be negative or zero
                if (agility <= 0 || strength <= 0) 
                {
                    cout << "invalid option" << endl;
                }
                
                break;
            }       
            
            // case 2 is for the bunny
            // the bunny is associated with agility and speed which can be used to calculate hirescore
            case 2 : 
            {
                // strength is zero because it's not used for the bunny
                strength = 0;
                
                cout<<"Enter agility: " << endl;
                cin >> agility;
                
                cout << "Enter speed: " << endl;
                cin >> speed;
                
                hireScore = (1.8 * agility) + (2.16 * strength) + (3.24 * speed);
                    
                cout << "Hire Score: " << hireScore << endl;
                
                // can't be negative or zero
                if (agility <= 0 || speed <= 0) 
                {
                    cout << "invalid option" << endl;
                }
                
                break;
            } 
            
            // case 3 is for the sloth
            case 3 : 
            {
                // agility isn't used for the sloth
                agility = 0;
                
                cout << "Enter strength: " << endl;
                cin >> strength;
                
                cout << "Enter speed:" << endl;
                cin >> speed;
                         
                hireScore = (1.8 * agility) + (2.16 * strength) + (3.24 * speed);
                    
                cout << "Hire Score: " << hireScore << endl;
                
                // these inputs can't be negative or zero
                if (speed <= 0 || strength <= 0) 
                {
                    cout << "invalid option" << endl;
                }
                
                break;
            }
            
            // when animal is 4 the program quits and prints good bye
            // if the animal isn't options 1 - 4, it prints invalid option
            default: 
            {
                if (animal == 4)
                {
                    cout << "Good bye!" << endl;
                }
                else if (animal != 1 || animal != 2 || animal != 3 || animal != 4)
                {
                    cout << "invalid option" << endl;
                }
            }
    
        }
    }


return 0;
}