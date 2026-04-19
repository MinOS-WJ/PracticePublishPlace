#include "segment.h"

// Point类的实现
Point::Point() : x(0), y(0) {
    readFromInput(); // 在构造时读取输入
}

Point::Point(double x, double y) : x(x), y(y) {}

void Point::readFromInput() {
    std::cin >> x >> y;
}

double Point::getX() const { return x; }

double Point::getY() const { return y; }

// Segment类的实现
Segment::Segment() : a(Point()), b(Point()) {}

Segment::Segment(Point a, Point b) : a(a), b(b) {}

Segment::Segment(double x1, double y1, double x2, double y2) : a(x1, y1), b(x2, y2) {}

Point Segment::MidPoint() const {
    double midX = (a.getX() + b.getX()) / 2;
    double midY = (a.getY() + b.getY()) / 2;
    return Point(midX, midY);
}

double Segment::Length() const {
    double dx = b.getX() - a.getX();
    double dy = b.getY() - a.getY();
    return sqrt(dx * dx + dy * dy);
}