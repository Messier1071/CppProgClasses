#include "point2d.hpp"

using namespace std;

int Point2d::getX()
{
    return m_x;
}

void Point2d::setX(int n_x)
{
    m_x = n_x;
}

int Point2d::getY()
{
    return m_y;
}

void Point2d::setY(int n_y)
{
    m_y = n_y;
}

Point2d::Point2d(int n_x, int n_y)
{
    m_x = n_x;
    m_y = n_y;
}
ostream &operator<<(ostream &os, const Point2d &point)
{
    os << "X:[" << point.m_x << "]" << "Y:[" << point.m_y << "]";
    return os;
}
