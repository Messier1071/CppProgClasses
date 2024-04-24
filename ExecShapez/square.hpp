#include "point2d.hpp"

class Square
{
private:
    Point2d m_ref;
    int m_side;

public:
    // constructors and destructor
    Square()
    {
        m_side = 0;
        m_ref = Point2d();
    };
    Square(int side, Point2d p)
    {
        m_side = side;
        m_ref = p;
    };

    // getters and setters
    void SetCircle(int side, Point2d ref)
    {
        m_ref = ref;
        m_side = side;
    }

    int GetSide() const
    {
        return m_side;
    }
    Point2d GetReference() const
    {
        return m_ref;
    }

    float CalcArea() { return 0; }
    float Perimeter() { return 0; }
};
