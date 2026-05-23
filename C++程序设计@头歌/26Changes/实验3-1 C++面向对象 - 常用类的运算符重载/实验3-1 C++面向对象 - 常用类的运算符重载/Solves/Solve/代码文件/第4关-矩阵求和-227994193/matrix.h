#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;

class Matrix {
private:
    int data[2][3];
public:
    Matrix();                                           // 默认构造，全 0
    Matrix operator+(const Matrix& m) const;            // 矩阵相加
    friend istream& operator>>(istream& is, Matrix& m); // 输入
    friend ostream& operator<<(ostream& os, const Matrix& m); // 输出
};

#endif