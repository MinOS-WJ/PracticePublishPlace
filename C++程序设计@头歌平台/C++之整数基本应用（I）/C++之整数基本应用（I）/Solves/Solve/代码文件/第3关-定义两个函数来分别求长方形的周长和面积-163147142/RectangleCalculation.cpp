// 求长方形的周长
int RectanglePerimeter(int a, int b) {
    if (a <= 0 || b <= 0) {
        return 0;
    }
    return 2 * (a + b);
}

// 求长方形的面积
int RectangleArea(int a, int b) {
    if (a <= 0 || b <= 0) {
        return 0;
    }
    return a * b;
}