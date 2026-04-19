/********* Begin ********/
#include "Int.h"

bool Int::operator==(const Int &rhs) {
    return value == rhs.value;
}

bool Int::operator!=(const Int &rhs) {
    return value != rhs.value;
}

bool Int::operator<(const Int &rhs) {
    return value < rhs.value;
}

bool Int::operator<=(const Int &rhs) {
    return value <= rhs.value;
}

bool Int::operator>(const Int &rhs) {
    return value > rhs.value;
}

bool Int::operator>=(const Int &rhs) {
    return value >= rhs.value;
}


/******** End **********/