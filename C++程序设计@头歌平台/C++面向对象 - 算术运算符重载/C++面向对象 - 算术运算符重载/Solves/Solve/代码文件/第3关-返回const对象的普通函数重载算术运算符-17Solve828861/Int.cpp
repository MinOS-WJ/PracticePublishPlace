/********** BEGIN **********/
#include "Int.h"

const Int operator + (const Int& lhs, const Int& rhs) {
    return Int(lhs.getValue() + rhs.getValue());
}

const Int operator - (const Int& lhs, const Int& rhs) {
    return Int(lhs.getValue() - rhs.getValue());
}

const Int operator * (const Int& lhs, const Int& rhs) {
    return Int(lhs.getValue() * rhs.getValue());
}

const Int operator / (const Int& lhs, const Int& rhs) {
    return Int(lhs.getValue() / rhs.getValue());
}

const Int operator % (const Int& lhs, const Int& rhs) {
    return Int(lhs.getValue() % rhs.getValue());
}

std::ostream& operator<<(std::ostream& os, const Int& obj) {
    os << obj.value;
    return os;
}





/********** END ***********/