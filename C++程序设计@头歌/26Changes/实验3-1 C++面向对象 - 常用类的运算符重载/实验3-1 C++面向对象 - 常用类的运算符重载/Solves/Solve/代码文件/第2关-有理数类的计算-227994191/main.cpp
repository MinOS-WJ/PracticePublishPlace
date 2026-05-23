#include "rational.h"
#include <iostream>
using namespace std;

int main() {
    int n, d, b;
    cin >> n >> d >> b;        // a 的分子、分母；以及整数 b
    Rational a(n, d);
    a = a * b;                 // 重新赋值给 a
    cout << a << endl;         // 输出 a*b
    cout << b * a << endl;     // 输出 b*a
    cout << b * a * a << endl; // 输出 b*a*a
    return 0;
}