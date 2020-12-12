#include<iostream>
#include<string>
#include<fstream>
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

void readFile(string fileName)
{
    
   ifstream inFile;
   inFile.open(fileName);
   if(inFile.is_open())
   {
       string line = "";
       string temp = "";
       string names[5];
       int values[5];
       
       int i = 0;
       
       string Arr[2];
       int max = 0;
       int min 0;
       
       while(getline(inFile, line))
       {
           if(line != "")
           {
                split(line, ',', Arr, 2);
                names[i] = Arr[0];
                values[i] = stoi(Arr[1]);
                i++;
           }
       }
   }
   else
   {
       cout << "fail" << endl;
   }
   
   max = values[0];
   min = values[0];
   int idxMax = 0;
   int idxMin = 0;
   
   for(int i = 0; i < 5; i++)
   {
       if(values[i] > max)
       {
           max = values[i];
           idxMax = i;
       }
       if(values[i] < min)
       {
           min = values[i];
           idxMin = i;
       }
   }
   
   cout << "congrats! " << names[idxMax] << " , your score is: " << max << endl;
   
   cout << "Sorry, " << names[idxMin] << " , your score is: " << min << endl;
   
   inFile.close();
        
}


int main()
{
    int size = 5;
    
    int sales[size] = {100, 55, 34, 77, 86};
    
    string employees[size] = {"Vanessa", "Sam", "Mike", "Cynthia", "Iona"};

    writeFile(employees, sales, size);
    
    string fileName = "final_dest.txt"
    
    readFile(fileName);
    
    
    return 0;
}