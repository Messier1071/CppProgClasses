#include <iostream>

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

    Point2d() : m_x(1), m_y(0) {}
    Point2d(int n_x, int n_y);
    ~Point2d();

    friend ostream &operator<<(ostream &os, const Point2d &point);
};
