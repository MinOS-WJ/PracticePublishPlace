/*********** BEGIN **********/
#include "Int.h"

// 实现成员函数算术运算符重载
Int Int::operator + (Int const& rhs) {
    return Int(this->value + rhs.value);
}

Int Int::operator - (Int const& rhs) {
    return Int(this->value - rhs.value);
}

Int Int::operator * (Int const& rhs) {
    return Int(this->value * rhs.value);
}

Int Int::operator / (Int const& rhs) {
    return Int(this->value / rhs.value);
}

Int Int::operator % (Int const& rhs) {
    return Int(this->value % rhs.value);
}




/********** END **********/