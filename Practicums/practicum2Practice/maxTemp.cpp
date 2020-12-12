#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<limits>
#include<cstddef>
using namespace std;


double maxTemp(string filename)
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
        
        int count = 0;
        
        string line;
        
        double max = 0;
        
        // limits is used to set the min equal to the max something can be 
        double min = numeric_limits<double>::max();
        
        // need maxPos and minPos for vectors
        int maxPos;
        
        int minPos;
        
        // declaring vectors
        vector<double> prices;
        
        vector<string> names;
        
        // reading each line
        while (getline(infile, line))
        {
            
            // while line is not empty, we add count by 1 to count number of lines
            if(line != "") 
            {
                count++; 
               
                int nameLen = 0;
                
                string name;
                
                // we need price to be string variable so we can convert later to double
                string strPrice;
                
                double price;
                
                // name length can't be longer than line and cant have comma
                while(nameLen < line.length() && line[nameLen] != ',')
                {
                    nameLen++;
                }
                
                
                if(nameLen != 0)
                {
                    
                    name = line.substr(0, nameLen);
                    
                    // price starts after the comma so we add one to nameLen
                    strPrice = line.substr(nameLen+1);
                    
                    // convert to double
                    price = stod(strPrice);
                    
                    // push back to add to vector
                    prices.push_back(price);
                    
                    names.push_back(name);
                    
                    // here we find max and min price
                    if(price > max)
                    {
                        max = price;
                        maxPos = count - 1;
                    }
                    
                    if(price < min)
                    {
                        min = price;
                        minPos = count - 1; 
                    }
                }
            }
        }
        
        // print the name by using .at(maxPos)
        // cout << "The number of lines: " << count << endl;
        
        // cout << "The most expensive product: " << prices.at(maxPos) << endl;
        
        // cout << "The least expensive product: " << names.at(minPos) << endl;
        
        return prices.at(maxPos);

    }
    
    infile.close();
}
    
//-------------------------------------------------------------------------------------------------

// #include<iostream>
// #include<fstream>
// #include<string>
// #include<vector>

// using namespace std;

// double maxTemp(string filename)
// {
//     ifstream infile;
    
//     infile.open(filename);
    
//     double temps[7];
    
//     // if infile fails to open
//     if(infile.fail())
//     {
//         return -1;
//     }
    
//     // if file opens
//     else
//     {
//         string line = "";
//         int size = 2;
//         string A[size];
//         double temp_val = 0.0;
//         int count = 0;
//         while(getline(infile, line))
//         {
//             if(line != "" )
//             {
//                 split(line, ',', A, 2);
//                 temp_val = stod(A[1]);
//                 temps[count] = temp_val;
//                 count++;
//             }
            
//             else
//             {
//                 continue;
//             }
//         }
    
//         double max = 0.0;
//         max = temps[0];
//         for(int i = 0; i < 7; i++)
//         {
//             if(temps[i] > max)
//             {
//                 max = temps[i];
//             }
//         }
//         return max;
//     }
    
//     infile.close();
// }