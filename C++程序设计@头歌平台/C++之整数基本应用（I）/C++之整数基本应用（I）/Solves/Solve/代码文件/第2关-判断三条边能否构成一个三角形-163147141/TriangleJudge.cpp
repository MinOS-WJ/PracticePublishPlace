// 判断三条边能否构成一个三角形
bool TriangleJudge(float a, float b, float c)
{
    // 请在此添加实现代码
    // 检查输入是否为正数
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }

    // 手动排序三条边
    float temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    // 检查是否满足三角形定理
    if (a + b > c) {
        return true;
    } else {
        return false;
    }
}