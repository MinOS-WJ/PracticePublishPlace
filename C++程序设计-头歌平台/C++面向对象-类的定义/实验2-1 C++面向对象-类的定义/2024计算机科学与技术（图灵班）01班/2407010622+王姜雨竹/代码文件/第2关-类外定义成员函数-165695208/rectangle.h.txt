#pragma once
#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    void Set();
    double GetLength() const;
    double GetWidth() const;
    double Area() const;
    double Perimeter() const;
};