#include <vector>
#include <iostream>

class Matrix {
public:
    Matrix(int rows = 2, int cols = 3);
    Matrix(const Matrix& other);
    Matrix operator+(const Matrix& other) const;
    friend std::istream& operator>>(std::istream& is, Matrix& matrix);
    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
    ~Matrix();

private:
    int rows;
    int cols;
    std::vector<std::vector<int>> data;
};