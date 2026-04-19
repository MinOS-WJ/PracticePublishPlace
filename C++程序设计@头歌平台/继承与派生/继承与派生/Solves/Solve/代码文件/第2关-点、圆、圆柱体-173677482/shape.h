#pragma once
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

class Point {
public:
    Point(int = 0, int = 0);
    void print() const;
protected:
    int x;
    int y;
};

class Circle : public Point {
public:
    Circle(int = 0, int = 0, double = 0);
    double getDiameter() const;
    double getCircumference() const;
    double getArea() const;
    void print() const;
private:
    double radius;
};

class Cylinder : public Circle {
public:
    Cylinder(int = 0, int = 0, double = 0, double = 0);
    double getArea() const;
    double getVolume() const;
    void print() const;
private:
    double height;
};

// Point 实现
Point::Point(int a, int b) : x(a), y(b) {}

void Point::print() const {
    std::cout << "[" << x << ", " << y << "]";
}

// Circle 实现
Circle::Circle(int x1, int y1, double r) : Point(x1, y1), radius(r) {}

double Circle::getDiameter() const {
    return radius * 2;
}

double Circle::getCircumference() const {
    return 2 * 3.1416 * radius;
}

double Circle::getArea() const {
    return 3.1416 * radius * radius;
}

void Circle::print() const {
    Point::print();
    std::cout << " Radius = " << radius;
}

// Cylinder 实现
Cylinder::Cylinder(int x, int y, double r, double h) : Circle(x, y, r), height(h) {}

double Cylinder::getArea() const {
    return 2 * Circle::getArea() + Circle::getCircumference() * height;
}

double Cylinder::getVolume() const {
    return Circle::getArea() * height;
}

void Cylinder::print() const {
    Circle::print();
    std::cout << " height = " << height;
}

