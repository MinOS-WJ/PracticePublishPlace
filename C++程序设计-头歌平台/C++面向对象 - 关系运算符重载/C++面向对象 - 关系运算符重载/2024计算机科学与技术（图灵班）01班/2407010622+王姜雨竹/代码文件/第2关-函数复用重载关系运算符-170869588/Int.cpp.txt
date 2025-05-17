/********* Begin ********/
#include "Int.h"

bool operator < (Int const& lhs, Int const& rhs) {
    return lhs.value < rhs.value;
}

bool operator == (Int const& lhs, Int const& rhs) {
    return lhs.value == rhs.value;
}

bool operator <= (Int const& lhs, Int const& rhs) {
    return (lhs < rhs) || (lhs == rhs);
}

bool operator > (Int const& lhs, Int const& rhs) {
    return rhs < lhs;
}

bool operator >= (Int const& lhs, Int const& rhs) {
    return rhs <= lhs;
}

bool operator != (Int const& lhs, Int const& rhs) {
    return !(lhs == rhs);
}



/******** End **********/