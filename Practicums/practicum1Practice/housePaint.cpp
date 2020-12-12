#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the width: " << endl;
    int width;
    cin >> width;
    
    cout << "Enter the depth: " << endl;
    int depth; 
    cin >> depth;
    
    cout << "Enter the number of windows/doors: " << endl;
    int doors;
    cin >> doors;
    
    
    double doors_cost = doors * 6.75;
    
    double perimeter = 2.0 * ( width + depth );
    
    double perimeternext100 = perimeter - 100;  
    double perimeternext200 = perimeter - 200;
     
    double first_100 = perimeter * 8;
    double next_100 = 100*8 + (perimeternext100 * 10);
    double over_200 = 100*8 + 200*10 + (perimeternext200 * 15) - 1000;
    
    
    double cost_first100 = first_100 + doors_cost;
    double cost_next100 = next_100 + doors_cost;
    double cost_over200 = over_200 + doors_cost;


    if (perimeter <= 100 && perimeter >= 0 && width >= 0 && depth >= 0 && doors >=0)
    {
        cout << "Total cost: " << cost_first100 << endl; 
    }

    else if (perimeter > 100 && perimeter <= 200 && width >= 0 && depth >= 0 && doors >=0) 
    {
        cout <<"Total cost: "  << cost_next100 << endl;
    }
    
    else if (perimeter > 200 && width >= 0 && depth >= 0 && doors >=0)
    {
        cout << "Total cost: " << cost_over200 << endl;
    }
   if (perimeter < 0 || width < 0  || depth < 0 || doors < 0)
    {
        cout << "Invalid value" << endl;
    }
return 0;
}