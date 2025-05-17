/********** BEGIN **********/
#ifndef _INT_H_
#define _INT_H_

class Int {
private:
    int value;

public:
    Int(int val = 0);
    int getValue() const;

    Int operator + (Int const& rhs) const;
    Int operator - (Int const& rhs) const;
    Int operator * (Int const& rhs) const;
    Int operator / (Int const& rhs) const;
    Int operator % (Int const& rhs) const;
};

#endif




/********** END ***********/
