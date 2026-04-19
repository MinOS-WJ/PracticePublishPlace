#include "matrix.h"

int main() {
    Matrix a;
    Matrix b;

    std::cin >> a >> b;
    Matrix c = a + b;
    std::cout << c;

    return 0;
}