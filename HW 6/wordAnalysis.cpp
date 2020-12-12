// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 6 - Problem #4

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
  
main()
{
   
// for unique words which has size 200 max
   string unique[200];
   
   // this array is used because each unique word has a different frequency
   int uniqueUsed[200];
   
   // keeps track of unique words
   int countUnique = 0;
   
   int n;
   
   // keeps track of how many words there are in a text
   int countWords = 0;
   
   string temp;
   
   string line;
   
   string word = "";
   
   bool check = true;
   
   cout<<"Enter a filename:" <<endl;
   string filename;
   cin >> filename;
   
   ifstream infile;
   
   infile.open(filename);
   
   if(infile.fail())
    {
        cout << "Could not open the file." << endl;
    }
   
   // if text opens
   else 
   {
      cout << "Enter the value of n:" << endl;
      int n;
      cin >> n;
        
      while(infile >> word)
      {
         // temp includes the word and space and we add countWords
         temp = temp + " ";
         
         countWords++;
         
         // sets first spot in array and in uniqueUsed to first word
         if(unique[0] == "")
         {
            countUnique++;
            
            // first word will have frequency of 1 and will be added to array
            uniqueUsed[0] = 1;
            
            // array has word
            unique[0] = word;
         }
            
         // when unique[0] isn't blank
         else
         {
            check = true;
            
            // for loop checks if a word in a specific position is the same. If the word is the same, we add to the uniqueUsed array
            for(int i = 0; i < countUnique && check == true; i++)
            {
               if(word != unique[i]) 
               {
                   check = true;
               }
               
               if(word == unique[i])
               {
                  check = false;
                  uniqueUsed[i]++;
               }
            }
            
            // we add the number of unique words to the uniqueUsed array and set it to 1 and will continue to update in while loop
            if(check == true)
            {
               countUnique++;
               
               uniqueUsed[countUnique] = 1;
               
               unique[countUnique] = word;
               
               word = "";
            }
         }
      }
      
      // Here we will find recurring words or their frequencies
      int frequencies = 0;
      
      // we set position to zero
      int pos = 0;
      
      int index = countWords;
      
      cout << endl;
      
      // loop goes while i is less than the number the user input
      for(int i = 0; i < n; i++)
      {
         for(int i = 0; i < countUnique; i++)
         {
            // new position i 
            if(uniqueUsed[i] > frequencies && uniqueUsed[i] < index)
            {
               pos = i;
               
               frequencies = uniqueUsed[i];
            }
   
         }
         
         // here we output the number of recurring words that was stored in the unique array using the position we found
         cout << frequencies << " - " << unique[pos] << endl;
         
         index = frequencies;
         
         frequencies = 0;
      }

   cout << endl;

   // here we output the unique words and the total number of words
   cout << "Unique words: " << countUnique << endl;

   // total word count
   cout<<"Total words: " << countWords;

   infile.close();
   
   }
   
   return 0;
}


