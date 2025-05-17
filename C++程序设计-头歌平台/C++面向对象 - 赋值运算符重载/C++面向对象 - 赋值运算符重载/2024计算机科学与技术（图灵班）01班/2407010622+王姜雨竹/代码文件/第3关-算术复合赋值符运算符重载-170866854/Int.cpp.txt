/********** BEGIN **********/
#include "Int.h"
Int::Int() : value(0) {} // 默认构造函数实现
Int::Int(int num) : value(num) {} // 添加构造函数实现
Int::Int(const Int& other) : value(other.value) {} // 拷贝构造函数实现
Int& Int::operator=(const Int& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}
Int& Int::operator=(int num) {
    if (this != reinterpret_cast<Int*>(&num)) {
        value = num;
    }
    return *this;
}
Int& Int::operator+=(const Int& other) {
    value += other.value;
    return *this;
}
void Int::setValue(int v) {
    value = v;
}
int Int::getValue() const {
    return value;
}
Int::~Int() {} // 析构函数实现




/********** END ***********/