#include <iostream>

using namespace std;

struct Point
{
    double x, y;
    Point(double _x, double _y) {
        x = _x;
        y = _y;
    }
    void print() {
        cout << "(" << x << " ,  " << y << ")"<< endl;
    }
};

void ThamTri(Point A)
{
    cout << "Dia chi dung  tham tri: " << &A << endl;
}

void ThamBien(Point& A)
{
    cout << "Dia chi dung tham bien: " << &A << endl;
}

int main()
{
    Point A(4,5);
    A.print();
    cout << "Dia chi tai main: " << &A << endl;
    ThamTri(A);
    ThamBien(A);
    return 0;
}