// CS1300 Spring 2020
// Author: Vera Duong
// Recitation: 301 – Telly Umada
// Homework 4 - Problem #5

#include<iostream>
#include<string>
using namespace std;

int count_matches(string search, string sub);

int main()
{

    string search, sub;

// user will enter their word, such as mississippi

    cout << "Enter the search string: " << endl;
    cin >> search;

// user will enter which string / characters they want to be searched for number of occurences
    cout << "Enter the substring to be searched: " << endl;
    cin >> sub;
    
// the function will have search and sub for an input and will return at the bottom

    cout << count_matches (search, sub) << endl;;

return 0;

}

// this is the actual function which will count the number of matches or occurances of a substring
// the function is called count_matches with search and sub as an input
int count_matches (string search, string sub)
{

// if the user inputs a blank it will return -1 as an error
    if(search == "" || sub == "")
    {
        return -1;
    }
    
// count will be initialized to zero
    int count = 0;

// When pos is used, the search only includes characters at or after position pos and will ignore any possible occurrences that include characters before pos.
   int pos;

// loop conintues until the end of string
// find is used to find the first occurrence of sub-string in the string the user input
    while((pos = search.find(sub)) != string::npos)
    {
        search = search.substr(pos + 1);
        count++;
    }

// the number of occurences is printed when return count is put after the cout
    cout << "Number of occurrences: "; return count;

}

