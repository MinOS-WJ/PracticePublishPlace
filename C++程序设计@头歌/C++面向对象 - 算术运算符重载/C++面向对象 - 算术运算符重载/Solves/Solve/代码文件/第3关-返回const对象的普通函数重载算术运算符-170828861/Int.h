/********** BEGIN **********/
#ifndef _INT_H_
#define _INT_H_

#include <iostream>

class Int {
public:
    Int(int val = 0) : value(val) {}
    Int& operator=(const Int& rhs) {
        if (this != &rhs)
            value = rhs.value;
        return *this;
    }
    int getValue() const { return value; }
    friend std::ostream& operator<<(std::ostream& os, const Int& obj);
private:
    int value;
};

const Int operator + (const Int& lhs, const Int& rhs);
const Int operator - (const Int& lhs, const Int& rhs);
const Int operator * (const Int& lhs, const Int& rhs);
const Int operator / (const Int& lhs, const Int& rhs);
const Int operator % (const Int& lhs, const Int& rhs);

#endif



/********** END ***********/