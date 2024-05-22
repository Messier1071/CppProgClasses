#include "point2d.hpp"

#include "iostream"
using namespace std;

int main()
{
    Point2d p1(2, 3), p2 = p1, p3(5, 5);
    cout << p1 << " | " << p2 << " | " << p3 << " | " << endl;
    return 0;
}