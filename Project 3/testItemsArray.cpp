#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int itemCost[5];
    ifstream infile;
    infile.open("store.txt");
    string str;
    while (getline(infile, str))
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == ',')
            {
                int cost = stoi(str.substr(j + 1, str.length()));
                itemCost[line] = cost;
                
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << itemCost[i] << endl;
    }   
}