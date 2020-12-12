#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of units: " << endl;
    int units;
    cin >> units;
    
    cout << "Enter the cost per unit: " << endl;
    double cost; 
    cin >> cost;
    
    double excess = units % 16;
    
    double normal_cost = units * cost * 1.0;
    double other_cost = 16 * cost + ((excess) * (cost * 1/2)) * 1.0;

if (units <= 16 && units >= 0 && cost >= 0)
{
    cout << "Total cost: " << normal_cost << endl; 
}

else if (units > 16 && cost >= 0) 
{
    cout <<"Total cost: "  << other_cost << endl;
}
    
if (normal_cost < 0 || other_cost < 0 || units < 0 || cost < 0) 
{
    cout << "Invalid value" << endl;
}

return 0;
}