#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

// this function will return the number of positions are between the separators the user inputs and print them separately 
int split(string input, char separator, string array[], int size)
{

// count will be the index to keep track of the stuff between the separators
    int count = 0;
    
// we need to include the separator with the string input
    input = input + separator;
    
    int length = input.length();
    
// we need to have a temporary word 
    string temp = "";
    
    for(int i = 0; i < length; i++)
    {

// if the input at positon i is not the same as the separator, the temp word will be added to whatever was at positon i 
        if(input[i] != separator)
        {
            temp = temp + input[i];
        }
        
// if the temp word is not empty and if the count or index is greater than the size of the array, we return -1 since it's an error
        else
        {
            if(temp.length() != 0)
            {
            
                if(count >= size)
                {
                    count = -1;
                    return count;
                }
            
// the array at position the index is added is the new temporary word
                else
                {
                    array[count++] = temp;
                
                    temp = "";
                }
            }
        }
    }
    
// we then return count which is the array at that positon without the separator and word at that positon
    return count;
    
}

double calcPastries(string filename)
{
    
    ifstream infile;
    
    infile.open(filename);
    
    if(infile.fail())
    {
        return -1;
    }
    
    else
    {
        vector<string> namesVector;
        vector<double> quantityVector;
        vector<double> costVector;
        vector<double> linecostVector;
        vector<double> totalVector;
        
        int count = 0;
        
        double total = 0;
        
        string line;
        
        while (getline(infile, line)) 
        {
            
            if(line != "") 
            {
                count++;

                    string array[3];
                    
                    string name;
                    
                    double quantity;
                    
                    double cost;
                    
                    split(line, ',', array, 3);
                   
                    name = array[0];
                    // namesVector.push_back(name);
                    
                    cost = stod(array[1]);
                    // costVector.push_back(cost);
                    
                    quantity = stod(array[2]);
                    // quantityVector.push_back(quantity);
                    
                    double lineCost = quantity * cost;
                
                    total += lineCost;
                    
                    cout << name << " : " << lineCost << endl;
            }
        }
        
        cout << "Total: " << total << endl;
        return count;
    } 
    
        infile.close();
    
    return 0;
}

int main()
{
    calcPastries("test.txt");
}
    
  
    

    


