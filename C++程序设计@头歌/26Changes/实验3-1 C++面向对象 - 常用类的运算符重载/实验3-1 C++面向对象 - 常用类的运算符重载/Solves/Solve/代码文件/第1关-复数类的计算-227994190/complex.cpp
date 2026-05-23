#include "complex.h"
#include <iomanip>

Complex::Complex(double r, double i) : real(r), imag(i) {}

// 复数 + 复数
Complex Complex::operator+(const Complex& c) const {
    return Complex(real + c.real, imag + c.imag);
}

// 复数 + 实数
Complex Complex::operator+(double d) const {
    return Complex(real + d, imag);
}

// 实数 + 复数（必须是非成员函数，因为左操作数是 double）
Complex operator+(double d, const Complex& c) {
    return Complex(d + c.real, c.imag);
}

// 输出格式： (real±imag i)，保留两位小数，末尾换行
ostream& operator<<(ostream& os, const Complex& c) {
    os << "(" << fixed << setprecision(2) << c.real;
    if (c.imag >= 0) os << "+";   // 负数会自带 "-" 号，正数手动补 "+"
    os << c.imag << "i)" << endl;
    return os;
}