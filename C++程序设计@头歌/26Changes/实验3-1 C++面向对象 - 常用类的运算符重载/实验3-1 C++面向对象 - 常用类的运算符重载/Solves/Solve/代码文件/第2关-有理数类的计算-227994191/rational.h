#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
using namespace std;

class Rational {
private:
    int numerator;
    int denominator;
    void simplify();
public:
    Rational(int n = 0, int d = 1);

    Rational operator*(const Rational& r) const;
    Rational operator*(int b) const;
    friend Rational operator*(int b, const Rational& r);
    friend ostream& operator<<(ostream& os, const Rational& r);
};

#endif