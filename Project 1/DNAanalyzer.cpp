// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Project 1 - Problem #7

#include <iostream>
#include <string>
using namespace std;

// sequence1 and sequence2 will be the first and second input
// it will calculate the similarity score of the strings with the equations and returns similarity 
double calcSimScore (string sequence1, string sequence2)
{
    
// ham is the hamming distance (num of positions that are different)
// initialize to zero
    int ham = 0;
    
// can't have different sequence lengths or empty inputs
    if (sequence1.length() != sequence2.length() || sequence1 == "" || sequence2 == "")
    {
        return 0;
    }
    
// iteration starts at zero 
// loop continues until i is less than the length of sequence 1
    for (int i = 0; i < sequence1.length(); i ++)
    {

// we add one to ham for each number of positions i doesn't match within the two sequences
        if (sequence1[i] != sequence2[i])
        {
            ham++;
        }
        
    }
    
// here is the calculation for the similarity score which will be returned outside the loop
// multiply by 1.0 to have an output with decimals
    double similarity = (sequence1.length() - ham) / (sequence1.length() * 1.0);
     
    return similarity;
    
}

// this function takes in the user's genome and sequence and finds the best similarity score within the genome
// it returns largest which is the highest similarity score
double findBestSimScore(string genome, string sequence)
{

// initialize to zero
// largest will later represent the greatest number of mathces of genome and sequence
    double largest = 0;

// can't have a blank input or sequence greater than genome
    if (sequence.length() > genome.length() || sequence == "" || genome == "")
    {
        return 0;
    }

// This loop goes through each element of the genome and sequence to find the number of matches
// ensures you don't iterate past genome length
    for (int i = 0; i <= genome.length() - sequence.length(); i++)
    {
        
// slice refers to each element the loop goes through to find matches

        string slice = genome.substr(i, sequence.length() );
        
// we use simScore to call upon the function from problem 4 to calculate the similarity score
// input the slice value and sequence

        double simScore = calcSimScore(slice, sequence);
        
// if the simScore is greater than largest, then we set largest equal to simScore becuase it's the new greatest number of matches
        if(largest < simScore)
        {
            largest = simScore;
        }
    }
    
// we then return the greatest similarity score with return largest
    return largest;

}

// When used as a function return type, void specifies that the function does not return a value
// this function finds the genome which matches the sequence the best out of the 3 input parameters
// doesn't return anything since it's a void function
void findMatchedGenome (string genome1, string genome2, string genome3, string Sequence)
{

// can't have blank inputs

    if( genome1 == "" || genome2 == ""  || genome3 =="" || Sequence == "")
    {
        cout << "Genomes or sequence is empty." << endl;
    }
    
// the sequence length cannot be larger than the genome lengths

    else if(Sequence.length() > genome1.length() || Sequence.length() > genome2.length() || Sequence.length() > genome3.length())
    {
        cout << "Sequence length must be smaller than genome length." << endl;
    }
    
// all three genomes must have the same length

    else if(genome1.length() != genome2.length() || genome2.length() != genome3.length())
    {
        cout << "Lengths of genomes are different." << endl;
    }

// we will call upon findBestSimScore from the previous problem into this problem in order to calcualte the score with the new parameters
// each parameter will have its own case

    double case1 = findBestSimScore(genome1,Sequence);
    double case2 = findBestSimScore(genome2,Sequence);
    double case3 = findBestSimScore(genome3,Sequence);
    
// max is used to find the greatest number of matches within the genomes

    double max;

// bestmatch is an assigned number that associates with the cases that will be outputed depending on the conditions
    int bestmatch;

// best match will equal 1 for genome1 when case1 is bigger than case2
    if(case1 >= case2)
    {
        max = case1;

        bestmatch = 1;
    }
    
// if case2 is bigger than 1 max will then equal case2 and the new bestmatch is equal to 2
    else
    {
        max = case2;

        bestmatch = 2;
    }

// if the max (either 1 or 2) is less than three, then case3 is the new max because it's bigger than both case1 and case2
    if(max < case3)
    {
        max = case3;

        bestmatch = 3;
    }

// depending on whether the max refers to case1,2,or 3, we will output whichever one is the best match to the sequence
    if(max == case1)
    {
            cout << "Genome 1 is the best match." << endl;
    }
        
    if(max == case2)
    {
            cout << "Genome 2 is the best match." << endl;
    }
    
    if(max == case3)
    {
            cout << "Genome 3 is the best match." << endl;
    }
    
}

// the int main() is where the user will input their strings
int main() 
{
    
// option is the integer value the user will pick on the menu
    int option;
    
// when option is not 4, the program will enter a loop and will continue to ask the user to pick an option until 4 is picked
    while (option != 4)
    {
        cout << "Select a numerical option: " << endl;
        cout << "=== menu ===" << endl;
        cout << "1. Find similarity score\n2. Find the best similarity score\n3. Analyze the genome sequences\n4. Quit" << endl;
        cin >> option;
    
        switch(option)
        {
        
// for case 1, the calcSimScore function is called upon and will calculate the score based off the user's input
            case 1:
            {
                string sequence1, sequence2;
    
                cout << "Enter sequence 1: " << endl;
                cin >> sequence1;
    
                cout << "Enter sequence 2: " << endl;
                cin >> sequence2;
    
                cout << "Similarity score: " << calcSimScore (sequence1, sequence2) << endl;
                
                break;
            }
            
// case 2 will call upon the findBestSimScore function and will pick the best score within the genome based off the sequence
            case 2:
            {
                string genome;
                string sequence;
    
                cout << "Enter genome: " << endl;
                cin >> genome;
    
                cout << "Enter sequence: " << endl;
                cin >> sequence;
    
                cout << "Best similarity score: " << findBestSimScore(genome, sequence) << endl;
                
                break;
            }
            
// case 3 will pick the genome that's most similar to the sequence the user enters
            case 3:
            {

                string genome1, genome2, genome3, Sequence;
    
                cout << "Enter genome 1: " << endl;
                cin >> genome1;
    
                cout << "Enter genome 2: " << endl;
                cin >> genome2;
                
                cout << "Enter genome 3: " << endl;
                cin >> genome3;
                
                cout << "Enter sequence: " << endl;
                cin >> Sequence;
    
                findMatchedGenome (genome1, genome2, genome3, Sequence);
                
                break;
            }
            
// if the user enters a number not within the options, it prints Invalid option and if they pick 4, which is quit, it will print Good bye!
            default: 
            {
                if (option == 4)
                {
                    cout << "Good bye!" << endl;
                }
                else if (option != 1 || option != 2 || option != 3 || option != 4)
                {
                    cout << "Invalid option." << endl;
                }
            }        
        
        }
    
    }
    
}