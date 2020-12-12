#include <iostream> 
#include <string>
using namespace std; 

int main()
{

	cout << "Enter a month:" << endl; 
	int month; 
	cin >> month;
    
	if(month == 4 || month == 5)
	{
		cout << "It's spring" << endl; 
	}
	else if(month >= 6 && month <= 8)
	{
		cout << "It's summer" << endl; 
	}
	else if (month >=9 && month <= 11)
	{
		cout << "It's autumn" << endl; 
	}
	else if (month == 12 || month == 1 || month == 2 || month == 3)
	{
		cout << "It's winter" << endl; 
	}

	if(month <= 0 || month > 12)
	{
		cout << "Invalid" << endl; 
	}

	return 0;
}
