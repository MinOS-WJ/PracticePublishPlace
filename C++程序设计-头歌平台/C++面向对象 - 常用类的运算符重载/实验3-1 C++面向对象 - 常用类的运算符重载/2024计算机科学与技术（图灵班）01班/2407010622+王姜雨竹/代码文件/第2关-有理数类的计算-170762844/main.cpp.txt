#include "rational.h"

int main() {
    int n, d, b;
    std::cin >> n >> d >> b;
    Rational a(n, d);

    a = a * Rational(b);
    std::cout << a << std::endl;

    Rational result = Rational(b) * a;
    std::cout << result << std::endl;

    result = Rational(b) * a * a;
    std::cout << result << std::endl;

    return 0;
}