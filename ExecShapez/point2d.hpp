#include <iostream>
#ifndef POINT2D.hpp
#define POINT2D .hpp

using namespace std;
class Point2d
{
private:
    int m_x, m_y;

public:
    int getX();
    void setX(int n_x);

    int getY();
    void setY(int n_x);

    Point2d(int n_x, int n_y);
    friend ostream &operator<<(ostream &os, const Point2d &point);
};
#endif
