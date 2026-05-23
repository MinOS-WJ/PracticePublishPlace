#include "matrix.h"

Matrix::Matrix() {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            data[i][j] = 0;
}

Matrix Matrix::operator+(const Matrix& m) const {
    Matrix result;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            result.data[i][j] = data[i][j] + m.data[i][j];
    return result;
}

istream& operator>>(istream& is, Matrix& m) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            is >> m.data[i][j];
    return is;
}

ostream& operator<<(ostream& os, const Matrix& m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (j > 0) os << " ";          // 元素之间加空格，行首不加
            os << m.data[i][j];
        }
        os << endl;
    }
    return os;
}