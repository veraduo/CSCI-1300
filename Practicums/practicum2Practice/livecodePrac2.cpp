#include<iostream>
#include<string>
#include<fstream>
using namespace std;


void writeFile(string employees[], int sales[], int size)
{
    
    ofstream outFile;
    
    outFile.open("final_dest.txt");
    
    if(outFile.fail())
    {
        cout << "Failed to open ofstream" << endl;
    }
    
    else
    {
        for(int i = 0; i < size; i++)
        {
            //name, value
            // employees[i], sales[i]
            outFile << employees[i] << "," << sales[i] << endl;
        }
    }
    
    outFile.close();
}


int main()
{
    int size = 5;
    
    int sales[size] = {100, 55, 34, 77, 86};
    
    string employees[size] = {"Vanessa", "Sam", "Mike", "Cynthia", "Iona"};

    writeFile(employees, sales, size);
    
    //string fileName = "final_dest.txt"
    
    return 0;
}