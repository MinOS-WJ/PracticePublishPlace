#ifndef SEGMENT_H_
#define SEGMENT_H_
#include <cmath>
#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point();
    Point(double x, double y);
    void readFromInput();
    double getX() const;
    double getY() const;
};

class Segment {
private:
    Point a;
    Point b;

public:
    Segment();
    Segment(Point a, Point b);
    Segment(double x1, double y1, double x2, double y2);
    Point MidPoint() const;
    double Length() const;
};

#endif // SEGMENT_H_