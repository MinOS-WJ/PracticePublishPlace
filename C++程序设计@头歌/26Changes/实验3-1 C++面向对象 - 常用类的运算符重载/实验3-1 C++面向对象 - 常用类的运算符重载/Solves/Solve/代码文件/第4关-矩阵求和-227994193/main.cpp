#include "matrix.h"
#include <iostream>
using namespace std;

int main() {
    Matrix a, b;
    cin >> a >> b;             // 连续读入两个矩阵
    Matrix c = a + b;
    cout << c;
    return 0;
}