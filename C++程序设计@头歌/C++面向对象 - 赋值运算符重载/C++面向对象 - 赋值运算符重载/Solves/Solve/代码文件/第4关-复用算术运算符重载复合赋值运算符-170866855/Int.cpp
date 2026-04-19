/********** BEGIN **********/
#include "Int.h"
#include <iostream>
using namespace std;

Int::Int() : value(0) {}

Int::Int(int num) : value(num) {}

Int::Int(const Int& other) : value(other.value) {}

Int& Int::operator=(const Int& rhs) {
    if (this != &rhs)        {
 value = rhs.value;
    }
    return *this;
}

Int& Int::operator=(int num) {
    value = num;
    return *this;
}

Int& Int::operator+=(const Int& rhs) {
    *this = *this + rhs; // 利用已有的 + 运算符和赋值运算符实现复合赋值
    return *this;
}

void Int::setValue(int v) {
    value = v;
}

int Int::getValue() const {
    return value;
}

Int::~Int() {}

// 算术运算符 + 的实现
Int operator+(const Int& lhs, const Int& rhs) {
    Int temp(lhs.value + rhs.value);
    return temp;
}


/********** END **********/