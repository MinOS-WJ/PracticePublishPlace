#include <iostream>
using namespace std;

int main()
{
    // 请在下面添加实现代码
    /******** Program ********/    
    int num;
    int count = 0; // 正整数的个数
    int sum = 0; // 正整数的总和
    double avg = 0.0; // 正整数的平均值

    do
    {
        cin >> num; // 读取输入的整数
        if (num != 0)
        {
            count++; // 增加正整数的个数
            sum += num; // 累加正整数的总和
        }
    } while (num != 0); // 当输入的数不是0时继续循环

    if (count > 0)
    {
        avg = static_cast<double>(sum) / count; // 计算平均值
    }

    // 输出结果
    cout << "n=" << count << endl;
    cout << "avg=" << avg << endl;
    cout << "sum=" << sum << endl;

    return 0;

    /********** End **********/ 
}
