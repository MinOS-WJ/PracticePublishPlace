#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0);              // 兼容默认构造和 (r,i) 构造

    Complex operator+(const Complex& c) const;        // 复数 + 复数
    Complex operator+(double d) const;                // 复数 + 实数

    friend Complex operator+(double d, const Complex& c);    // 实数 + 复数
    friend ostream& operator<<(ostream& os, const Complex& c); // 输出
};

#endif