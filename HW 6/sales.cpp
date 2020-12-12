// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 6 - Problem #2

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// This function will take in the filename, array of employee names, sales array, and size of the array
// it will count the number of employees and return the sales for each position of the text it's associated with the employee
int readSales(string filename, string names[], int sales[][12], int size)
{
    ifstream infile;
    
    infile.open(filename);
    
    // if infile fails to open
    if(infile.fail())
    {
        return -1;
    }
    
    // if file opens
    else
    {
        int countRows = 0;
        
        int countName = 0;
        
        string line;
        
        // need getline to read the whole text file and the number of names can't be bigger than array size
        while (getline(infile, line) && countName < size)
        {
            // making sure the line isn't empty
            if(line != "") 
            {
                countRows++;
                
                int nameLen = 0;
                
                string name;
            
                // Process names on odd line
                if(countRows % 2 != 0)
                {
                    // namelen less than lenght of the line we increment nameLen by 1
                    while(nameLen < line.length())
                    {
                        nameLen++;
                    }
                     
                    // we use substr to read from pos zero until the namelen ends and store the names into an array    
                    if(nameLen != 0)
                    {
                        name = line.substr(0, nameLen);
                        names[countName] = name; 
                    }
                    
                } 
                
                // Process numbers on even lines
                else 
                {
                    // delimeter is a comma
                    char separator = ',';
                    
                    line = line + separator; 
                    
                    int length = line.length();
                    
                    string temp = "";
                    
                    int columnsCount = 0;
                    
                    // we iterate while i is less than the length of the line
                    for(int i = 0; i < length; i++)
                    {
                        
                        // temp the old temp with the character at pos i
                        if(line[i] != separator || line[i] == ' ')
                        {
                            
                            temp = temp + line[i];
                        }
                        else
                        {
                            
                            // sales array with rows equal to the number of names and columnsCount
                            // use stoi to convert temp to int
                            if(temp.length() != 0)
                            {
                                sales[countName][columnsCount] = stoi(temp);
                                
                                columnsCount++;
                                
                                temp = "";
                                
                            }
                        }
                    }
                   
                    
                    countName++; 
                    
                }
            }
        } 
        
    return countName;
        
    }
}

// int main to test the function 
int main()
{
    cout << "enter a filename: " << endl;
    string filename;
    cin >> filename;
    
    // we know columns is 12
    int employees;
    int size = 10;
    string names[size];
    const int columns = 12;
    int sales[size][columns];
    
    // call upon the function with parameters that are declared
    int check = readSales(filename, names, sales, size);
    
    cout << "number of employees: " << check << endl;
    
}