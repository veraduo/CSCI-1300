#include <iostream>
#include <vector>

using namespace std; 

int main()
{
    vector<string> string_vec;
    string_vec.push_back("vector");
    string_vec.push_back("Obama");
    string_vec.push_back("Trump");

    vector<string> string_vec2;
    string_vec2.push_back("cheese");
    string_vec2.push_back("gouda");
    string_vec2.push_back("swiss");

    vector<vector<string> > vec_2d;
    vec_2d.push_back(string_vec);
    vec_2d.push_back(string_vec2);
    
    for(int i=0;i < vec_2d.size();i++){
        for(int j = 0; j < vec_2d.at(i).size();j++){
            cout << vec_2d.at(i).at(j) << " ";
        }
        cout << endl;
    }
    return 0;
}








