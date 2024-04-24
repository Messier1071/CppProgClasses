#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "point2d.hpp"

class Triangle
{
private:
    Point2d m_v1,m_v2,m_v3;
    Point2d m_ref; //em função do primeiro vertice
    float m_l1, m_l2, m_l3;

public:
    //Triangle() {m_v1=m_v2=m_v3=m_ref=Point2d(0,0); };
    Triangle() : m_v1(Point2d(0,0)), m_v2(Point2d(0,0)), m_v3(Point2d(0,0)), m_ref(Point2d(0,0)), m_l1(0), m_l2(0), m_l3(0) { };

    Triangle(Point2d v1, Point2d v2, Point2d v3, Point2d ref=Point2d(0,0)) : m_v1(v1), m_v2(v2), m_v3(v3), m_ref(ref) { };

    ~Triangle() {};

    //setters and getters
    void SetVertex(Point2d v1, Point2d v2, Point2d v3);
    void SetReference(Point2d ref);

    Point2d GetVertex1() const { return m_v1; };
    Point2d GetVertex2() const { return m_v2; };
    Point2d GetVertex3() const { return m_v3; };
    float GetSide1() const { return m_l1; };
    float GetSide2() const { return m_l2; };
    float GetSide3() const { return m_l3; };

    float CalcArea();
    float Perimeter();

private:
    float distance(int p1x, int p1y, int p2x, int p2y);


};

#endif
