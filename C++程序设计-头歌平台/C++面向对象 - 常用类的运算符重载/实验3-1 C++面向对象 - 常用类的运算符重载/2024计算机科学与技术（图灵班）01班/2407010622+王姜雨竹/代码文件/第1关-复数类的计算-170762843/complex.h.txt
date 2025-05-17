#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <iomanip>
using namespace std;

class Complex {
private:
    double real; // 实部
    double imag; // 虚部

public:
    // 构造函数
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // 重载 + 运算符，用于复数加复数
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    // 重载 + 运算符，用于复数加实数
    Complex operator+(double d) const {
        return Complex(real + d, imag);
    }

    // 重载 << 运算符，用于输出复数
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << "(" << fixed << setprecision(2) << c.real;
        if (c.imag >= 0)
            os << "+" << fixed << setprecision(2) << c.imag << "i";
        else
            os << "-" << fixed << setprecision(2) << -c.imag << "i";
        os << ")"<<endl;
        return os;
    }

    // 重载 + 运算符的全局版本，用于实数加复数
    friend Complex operator+(double d, const Complex& c) {
        return c + d;
    }
};

#endif // COMPLEX_H