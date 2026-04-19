#include <iostream>
using namespace std;

// Circle 类的定义
class Circle
{
public:
    Circle(float r = 1) : radius(r) {} // 构造函数的实现
    float GetArea() { return 3.1416 * radius * radius; } // GetArea 成员函数的实现
private:
    float radius;
};

// Cylinder 类的定义和实现
class Cylinder : public Circle {
public:
    Cylinder(float r = 1, float h = 6.2) : Circle(r), height(h) {}
    float GetVolume() {
        return GetArea() * height;
    }
private:
    float height;
};

