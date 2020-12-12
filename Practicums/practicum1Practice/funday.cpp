#include <iostream>
using namespace std; 

int main() 
{ 
    cout << "Enter the day: " << endl;
    int day;
    cin >> day;

if (day == 1)
{
    cout << "MONDAY" << endl;

}
    
else if (day == 2 || day == 3 || day == 4)
{
    cout << "WORKDAY" << endl;
}

else if (day == 5)
{
    cout << "FUNDAY" << endl;
}
    
else if (day == 6 || day == 0)
{
    cout << "SLEEPDAY" << endl;
}
    
else 
{
    cout << "INVALID"<< endl;
}
return 0; 
}

