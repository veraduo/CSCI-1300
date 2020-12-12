#include <iostream>
using namespace std;

int main()
{
    cout << "Enter unites used: " << endl;
    int units;
    cin >> units;
    
    double unitsnext100 = units - 100;  
    double unitsnext200 = units - 200;
     
    double first_100 = units * 1.23;
    double next_100 = 100*1.23 + (unitsnext100 * 1.14);
    double over_200 = 100*1.23 + 100*1.14 + (unitsnext200 * 1.08);
    
    
    if (units <= 100 && units >= 0)
    {
        cout << "Total cost: " << first_100 << endl; 
    }

    else if (units > 100 && units <= 200) 
    {
        cout << "Total cost: "  << next_100 << endl;
    }
    
    else if (units > 200)
    {
        cout << "Total cost: " << over_200 << endl;
    }
    
   if (units < 0)
    {
        cout << "Incorrect input" << endl;
    }
return 0;
}