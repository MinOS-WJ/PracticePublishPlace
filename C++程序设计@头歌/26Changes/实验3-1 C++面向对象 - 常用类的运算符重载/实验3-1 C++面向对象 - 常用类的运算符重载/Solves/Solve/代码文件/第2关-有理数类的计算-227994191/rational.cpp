#include "rational.h"

static int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a == 0 ? 1 : a;
}

Rational::Rational(int n, int d) : numerator(n), denominator(d) {
    simplify();
}

void Rational::simplify() {
    if (denominator < 0) {
        numerator   = -numerator;
        denominator = -denominator;
    }
    int g = gcd(numerator, denominator);
    if (g != 0) {
        numerator   /= g;
        denominator /= g;
    }
}

Rational Rational::operator*(const Rational& r) const {
    return Rational(numerator * r.numerator, denominator * r.denominator);
}

Rational Rational::operator*(int b) const {
    return Rational(numerator * b, denominator);
}

Rational operator*(int b, const Rational& r) {
    return Rational(b * r.numerator, r.denominator);
}

ostream& operator<<(ostream& os, const Rational& r) {
    if (r.denominator == 1) {
        os << r.numerator;
    } else {
        os << r.numerator << "/" << r.denominator;
    }
    return os;
}