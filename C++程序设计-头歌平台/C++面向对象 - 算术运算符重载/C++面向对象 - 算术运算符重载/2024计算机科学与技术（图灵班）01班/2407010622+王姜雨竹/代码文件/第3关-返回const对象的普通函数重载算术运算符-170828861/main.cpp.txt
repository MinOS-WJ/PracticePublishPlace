/********** BEGIN **********/
#include "Int.h"

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    Int a(num1), b(num2);

    Int c = a + b;
    std::cout << c.getValue() << " ";

    c = a - b;
    std::cout << c.getValue() << " ";

    c = a * b;
    std::cout << c.getValue() << " ";

    c = a / b;
    std::cout << c.getValue() << " ";

    c = a % b;
    std::cout << c.getValue() << std::endl;

    return 0;
}




/********** END ***********/
