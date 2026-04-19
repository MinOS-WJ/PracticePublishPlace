#include "object.h"

// 构造函数
object::object(int a_val, int b_val) : a(a_val), b(b_val) {}

// Print方法
void object::Print() const {
    cout << a << " " << b << " " << c << endl;
}

// GetA方法
int object::GetA() const {
    return a;
}

// GetB方法
int& object::GetB() {
    return b;
}

// GetC方法
int object::GetC() const {
    return c;
}

// 重载++运算符
object& object::operator++() {
    ++b;
    return *this;
}