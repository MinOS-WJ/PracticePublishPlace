/********** BEGIN **********/
#include "Int.h"
Int::Int() : value(0) {}
Int::Int(const Int& other) : value(other.value) {}
Int& Int::operator=(const Int& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}
Int& Int::operator=(int num) { // 新增的赋值运算符重载实现
    if (this != reinterpret_cast<Int*>(&num)) { // 防止自赋值，这里注意类型转换
        value = num;
    }
    return *this;
}
void Int::setValue(int v) {
    value = v;
}
int Int::getValue() const {
    return value;
}
Int::~Int() {}




/********** END ***********/