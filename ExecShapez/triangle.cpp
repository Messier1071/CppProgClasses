#include "triangle.hpp"
#include <cmath>

void Triangle::SetVertex(Point2d v1, Point2d v2, Point2d v3)
{
    m_v1=v1;
    m_v2=v2;
    m_v3=v3;
}

void Triangle::SetReference(Point2d ref)
{
    m_ref=ref;
}

float Triangle::CalcArea()
{
    float m_l1 = distance(m_v2.GetX(),m_v2.GetY(),m_v3.GetX(),m_v3.GetY());
    float m_l2 = distance(m_v3.GetX(),m_v3.GetY(),m_v1.GetX(),m_v1.GetY());
    float m_l3 = distance(m_v2.GetX(),m_v2.GetY(),m_v1.GetX(),m_v1.GetY());

    cout << "Edges are : " << m_l1 << " " << m_l2 << " " << m_l3 << endl;
    float s = (m_l1+m_l2+m_l3)/2;
    float A = sqrt(s*(s-m_l1)*(s-m_l2)*(s-m_l3));
    return A;
}

float Triangle::Perimeter()
{
    return m_l1+m_l2+m_l3;
}

float Triangle::distance(int p1x, int p1y, int p2x, int p2y)
{
    float D = sqrt((p1x-p2x)*(p1x-p2x) + (p1y-p2y)*(p1y-p2y));
    return D;
}
