#include "usr.h"

void myReverse(string::iterator begin, string::iterator end) {
    while (begin < end - 1) {
        char tmp   = *begin;
        *begin     = *(end - 1);
        *(end - 1) = tmp;
        ++begin;
        --end;
    }
}