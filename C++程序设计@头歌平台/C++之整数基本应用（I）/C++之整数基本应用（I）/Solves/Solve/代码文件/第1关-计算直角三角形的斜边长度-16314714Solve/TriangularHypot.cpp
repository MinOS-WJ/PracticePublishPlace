#include <math.h>

// 计算直角三角形的斜边长度
double TriangularHypot(float a, float b)
{
    // 请在此添加实现代码
    double sumOfSquares = pow(a, 2) + pow(b, 2);
    return sqrt(sumOfSquares);
}