#include <iostream>
#include "time.h"

int main() {
    int h1, m1, s1, h2, m2, s2, i;
    std::cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    Time t1(h1, m1, s1), t2(h2, m2, s2);
    std::cout << "t1+t2=" << t1 + t2 << std::endl;

    std::cin >> h1 >> m1 >> s1 >> i;
    Time t3(h1, m1, s1);
    std::cout << "t1-i=" << t3 - i << std::endl;

    std::cin >> i >> h1 >> m1 >> s1;
    Time t4(h1, m1, s1);
    std::cout << "i+t1=" << i + t4 << std::endl;

    return 0;
}