/********** BEGIN **********/
#include "Int.h"

Int::Int(int val) : value(val) {}

int Int::getValue() const {
    return value;
}

Int Int::operator + (Int const& rhs) const {
    return Int(value + rhs.value);
}

Int Int::operator - (Int const& rhs) const {
    return Int(value - rhs.value);
}

Int Int::operator * (Int const& rhs) const {
    return Int(value * rhs.value);
}

Int Int::operator / (Int const& rhs) const {
    if (rhs.value != 0) {
        return Int(value / rhs.value);
    } else {
        return Int(0);
    }
}

Int Int::operator % (Int const& rhs) const {
    if (rhs.value != 0) {
        return Int(value % rhs.value);
    } else {
        return Int(0);
    }
}




/********** END ***********/