#include <iostream>

using namespace std;

struct Point
{
    double x, y;
    Point() {};
    Point(double _x, double _y) {
        x = _x;
        y = _y;
    }
    void print() {
        cout << "(" << x << " ,  " << y << ")" << endl;
    }
    
};

int main()
{
    Point A(4, 5);
    A.print();
    cout << "Dia chi cua A: " << &A << endl;    
    cout << "Dia chi cua toa do x: " << &(A.x) << endl; 
    cout << "Dia chi cua toa do y: " << &(A.y) << endl;
    return 0;
}
//dia chi cua A trung voi x
//dia chi cua y cach x 8 byte (gia tri double)