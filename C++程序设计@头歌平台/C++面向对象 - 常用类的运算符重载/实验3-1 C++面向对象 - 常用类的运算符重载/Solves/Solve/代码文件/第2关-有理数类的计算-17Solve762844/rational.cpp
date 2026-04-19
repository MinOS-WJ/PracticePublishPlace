#include "rational.h"

std::ostream& operator<<(std::ostream& os, const Rational& r) {
    if (r.denominator == 1) {
        os << r.numerator;
    } else {
        os << r.numerator << "/" << r.denominator;
    }
    return os;
}

Rational operator*(const Rational& a, const Rational& b) {
    return Rational(a.numerator * b.numerator, a.denominator * b.denominator);
}