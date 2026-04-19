#pragma

#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    // 默认构造函数
    Point() : x(0), y(0) {}

    // 带参数的构造函数
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    // 拷贝构造函数
    Point(const Point& p) : x(p.x), y(p.y) {}

    // 输出成员变量的值
    void print() const {
        cout << "x和y的值为：x=" << x << ",y=" << y << endl;
    }
};