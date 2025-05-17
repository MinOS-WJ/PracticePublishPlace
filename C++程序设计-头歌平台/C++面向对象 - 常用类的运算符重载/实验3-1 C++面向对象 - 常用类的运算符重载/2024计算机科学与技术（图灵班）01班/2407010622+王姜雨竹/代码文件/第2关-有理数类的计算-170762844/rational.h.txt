#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <cstdlib>

class Rational {
private:
    int numerator;
    int denominator;

    static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void normalize() {
        if (denominator == 0) {
            numerator = 0;
            denominator = 1;
            return;
        }
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
        int g = gcd(std::abs(numerator), std::abs(denominator));
        if (g != 0) {
            numerator /= g;
            denominator /= g;
        }
    }

public:
    Rational(int n = 0, int d = 1) : numerator(n), denominator(d) {
        normalize();
    }

    friend std::ostream& operator<<(std::ostream& os, const Rational& r);
    friend Rational operator*(const Rational& a, const Rational& b);
};

#endif