// 求1到n间所有整数的和
int SumOfNumber(int n)
{
    // 请在此提供实现代码
    int sum = 0; // 用于存储累加和的变量
    for (int i = 1; i <= n; i++) // 从1到n循环
    {
        sum += i; // 每次循环将当前值i加到sum中
    }
    return sum; // 返回累加和
}