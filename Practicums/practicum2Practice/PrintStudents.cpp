#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

double PrintStudents(string filename, int minScore, string out)
{
    
    ifstream infile;
    
    ofstream outfile;
    
    outfile.open(out);
    
    infile.open(filename);
    
    if(infile.fail())
    {
        return -1;
    }
    
    else
    {
        vector<string> names;
        vector<string> classesVector;
        vector<int> scoreVector;
        
        int count = 0;
        
        string line;
        
        while (getline(infile, line)) 
        {
            
            if(line != "") 
            {
                count++;

                    string array[3];
                    
                    string name;
                    
                    string classes;
                    
                    int score;
                    
                    split(line, ',', array, 3);
                   
                    name = array[0];
                    names.push_back(name);
                    
                    score = stoi(array[1]);
                    scoreVector.push_back(score);
                    
                    classes = array[2];
                    classesVector.push_back(classes);
                    
                    if(score >= minScore)
                    {
                        outfile << name << "," << classes << endl;
                    }
            }
        }
            return count;
    } 
          infile.close();
    
    return 0;
}
    
//---------------------------------------------------------------------------------
    
double PrintStudents(string filename, int minScore, string out)
{
    
    ifstream infile;
    
    ofstream outfile;
    
    outfile.open(out);
    
    infile.open(filename);
    
    if(infile.fail())
    {
        return -1;
    }
    
    else
    {
        
        int count = 0;
        
        string line;
        
        while (getline(infile, line)) 
        {
            
            if(line != "") 
            {
                count++;

                    string array[3];
                    
                    string name;
                    
                    string classes;
                    
                    int score;
                    
                    split(line, ',', array, 3);
                   
                    name = array[0];
                    
                    score = stoi(array[1]);
                    
                    classes = array[2];
                    
                    if(score >= minScore)
                    {
                        outfile << name << "," << classes << endl;
                    }
            }
        }
            return count;
    } 
          infile.close();
    
    return 0;
}

    


