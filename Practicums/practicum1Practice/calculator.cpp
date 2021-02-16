#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    cout << "Enter a number: " << endl;
    double num1;
    cin >> num1;

    
    cout << "Enter another number: " << endl;
    double num2;
    cin >> num2; 

    cout << "Enter an operator: " << endl;
    char operator_input;
    cin >> operator_input;
    
switch (operator_input)
{

    case '+':
    {
        double plus = num2 + num1 * 1.0;
        cout << fixed << setprecision(2) << num1 << " + " << num2 << " = " << fixed << setprecision(2) << plus << endl;
        
    }
    break;
    
    case '-':
   {
        double minus = num1 - num2 * 1.0;
        cout << fixed << setprecision(2) << num1 << " - " << num2 << " = " << fixed << setprecision(2) << minus << endl;
        
    }
    break;
    
    case '*':
    {
        double times = num2 * num1 * 1.0;
        cout << fixed << setprecision(2) << num1 << " * " << num2 << " = " << fixed << setprecision(2) << times << endl;
        
    }
    break;

    case '/':
    {
        double divide = num1 / (double)num2;
        cout << fixed << setprecision(2) << num1 << " / " << num2 << " = " << fixed << setprecision(2) << divide << endl;
        
    }
    break;

    default:
    {
        cout << "Invalid operator!" << endl;
    }
}
return 0;
}


