#include <iostream>
using namespace std;

class Shape{
    private:
        double area;
    public:
        Shape(){
            area = 0.0;
            cout << "shape ";
        }
};

class Circle: public Shape{
    private:
        double rad;
    public:
        Circle(){
            rad = 1.0;
            cout << "circle ";
        }
        
        double getArea() {
            return 3.14 * rad * rad;
        }
};

int main(void)
{
    Circle c;
    
    cout << c.getArea() << endl;
}
