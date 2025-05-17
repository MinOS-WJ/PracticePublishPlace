/********** BEGIN **********/
#include "Int.h"
Int::Int() : value(0) {}
Int::Int(const Int& other) : value(other.value) {}
Int& Int::operator=(const Int& other) {
    if (this != &other) { // 防止自赋值
        value = other.value;
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