#include <iostream>
#include <cmath>
using namespace std;

#define A (4 * x * x * x + 3 * x * x + 2 * x + 1)
#define B (12 * x * x + 6 * x + 2)

int main()
{ 

    double x = 1, a;

    // 请在下面添加do-while部分实现代码
    /******** Program ********/
    double epsilon = 1e-6; // 误差范围

    do
    {
        a = x; // 保存当前x的值
        x = x - A / B; // 牛顿迭代法更新x
    } while (fabs(x - a) > epsilon); // 当两次迭代的差值小于误差时停止


    /********** End **********/	

    cout << x << endl;
}
