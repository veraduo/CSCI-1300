// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 6 - Problem #3

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
    
// this split function takes strings between delimeters and puts them into arrays
int split(string input, char separator, string array[], int size)
{
    int count = 0;
    
    input = input + separator;
    
    int length = input.length();
    
    string temp = "";
    
    for(int i = 0; i < length; i++)
    {

        if(input[i] != separator)
        {
            temp = temp + input[i];
        }
        
        else
        {
            if(temp.length() != 0)
            {
            
                if(count >= size)
                {
                    count = -1;
                    return count;
                }
            
                else
                {
                    array[count++] = temp;
                
                    temp = "";
                }
            }
        }
    }
    
    return count;
}


int main()
{
    
    cout << "Enter the file name: " << endl;
    string filename;
    cin >> filename;
    
    ifstream infile; 
    
    infile.open(filename);
    
    if(infile.fail())
    {
        cout << "Could not open file." << endl;
    }
    
    // declare vectors for each type of score
    else
    {
        vector<string> names;
        vector<int> satValue;
        vector<double> gpaValue;
        vector<int> interestValue;
        vector<int> qualityValue;
        vector<int> sem1Value;
        vector<int> sem2Value;
        vector<int> sem3Value;
        vector<int> sem4Value;
        vector<double> Scores;
        
        int count = 0;
        
        // max is the score student needs to be recommended
        int max = 6;
        
        string line;
        
        // print results
        cout << endl;
        
        cout << "Results: " << endl;
        
        // read each line
        while (getline(infile, line)) 
        {
            
            if(line != "") 
            {
                // skip the first line since it's just strings
                  if(count != 0)
                  {
                    
                    // array size 9 since it holds that many parameters
                    string array[9];
                    
                    string name;
                    
                    // declare variables for the different data
                    int sat;
         
                    double gpa;
           
                    int interest;
   
                    int quality;

                    int sem1;

                    int sem2;
 
                    int sem3;

                    int sem4;
                    
                    // calling upon split function
                    split(line, ',', array, 9);
                   
                   // putting each score into the array and push back into the vector
                    name = array[0];
                    names.push_back(name);
                    
                    // convert to int or double depending on data type
                    sat = stoi(array[1]);
                    satValue.push_back(sat);
            
                    gpa = stod(array[2]);
                    gpaValue.push_back(gpa);
      
                    interest = stoi(array[3]);
                    interestValue.push_back(interest);
                    
                    quality = stoi(array[4]);
                    qualityValue.push_back(quality);
   
                    sem1 = stoi(array[5]);
                    sem1Value.push_back(sem1);
              
                    sem2 = stoi(array[6]);
                    sem2Value.push_back(sem2);
            
                    sem3 = stoi(array[7]);
                    sem3Value.push_back(sem3);
      
                    sem4 = stoi(array[8]);
                    sem4Value.push_back(sem4);
                        
                    // calculating normalized gpa and sat
                    double normGPA = gpa * 2.0;
                    
                    double normSAT = sat / 160.0;
                    
                    // calculating actual score and putting it into a vector
                    double score = (0.4 * normGPA) + (0.3 * normSAT) + (0.2 * quality) + (0.1 * interest);
                    
                    Scores.push_back(score);
                    
                    // score (chosen)
                    if(score >= max)
                    {
                        
                        cout << name << " ," << score << ",score" << endl;
                        
                    }
                    
                    // outlier
                    else if((score >= 5 && interest == 0) || (score >= 5 && normGPA > 2 + normSAT) )
                    {
                        cout << name << " ," << score << ",outlier" << endl;
                    }
                    
                    // grade improvement 
                    else if(score >= 5 && sem1 < sem2 && sem2 < sem3 && sem3 < sem4)
                    {
                        cout << name << " ," << score << ",grade improvement" << endl;
                    }
                    
                    // none of the above
                    else
                    {
                        cout << name << " , " << score << endl;
                    }
                }
            }
            
            count++;
        } 
    }
    
    infile.close();
    
    return 0;
    
}
    


