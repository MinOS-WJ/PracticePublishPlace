/********* Begin ********/
#include "Int.h"

bool operator < (Int const& lhs, Int const& rhs) {
    return lhs.getValue() < rhs.getValue();
}

bool operator == (Int const& lhs, Int const& rhs) {
    return lhs.getValue() == rhs.getValue();
}


/******** End **********/