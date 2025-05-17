#pragma once
#include <iostream>
using namespace std;

class Double {
private:
    double v;
public:
    Double(double v = 0);
    void Set(double v);
    Double& operator=(double v); // 补充复制赋值运算符的声明
    void Print() { cout << v << endl; }
};