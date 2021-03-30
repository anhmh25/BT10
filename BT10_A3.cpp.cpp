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
    Point mid_point(const Point otherPoint){
        Point MidPoint;
        MidPoint.x = (x + otherPoint.x) / 2;
        MidPoint.y = (y + otherPoint.y) / 2;
        return MidPoint;
    }
};

int main()
{
    Point A(4, 5);
    A.print();
    Point B(10, 5);
    B.print();
    Point C = A.mid_point(B);
    C.print();
    return 0;
}