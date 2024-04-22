#include <iostream>
#include "point2d.hpp"

using namespace std;

class Circle
{
private:
    Point2d m_point;
    int m_radius;

public:
    Point2d getP()
    {
        return m_point;
    }
    void setP(Point2d point)
    {
        m_point = point;
        return;
    }
    int getRadius()
    {
        return m_radius;
    }
    void setRadius(int radius)
    {
        m_radius = radius;
        return;
    }

    int getX()
    {
        return m_point.getX();
    }
    void setX(int n_x);

    int getY();
    void setY(int n_x);
};