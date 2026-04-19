#include <iostream>

// 包含流操作算子库
#include <iomanip>
using namespace std;

// 定义常量PI，后面可以直接用PI代替后面的数值
#define PI 3.14159265358979323846

int main()
{
    int n;
    // 请在Begin-End之间添加你的代码，输入n，按不同的精度输出 PI。
    /********** Begin *********/
    cin >> n;
    
    // 输出5个不同精度的PI值
    for (int i = 0; i < 5; i++)
    {
        cout << fixed << setprecision(n + i) << PI << endl;
    }
    
    /********** End **********/
    return 0;
}
