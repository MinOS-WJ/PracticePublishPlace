// 使用do-while循环求1到n间所有整数的和
int Sum(int n)
{
    // 请在此添加实现代码
    if (n < 1) {
        return 0; // 如果n小于1，返回0
    }

    int sum = 0; // 用于存储累加和
    int i = 1; // 循环计数器

    do
    {
        sum += i; // 将当前值i加到sum中
        i++; // 计数器自增
    } while (i <= n); // 循环条件

    return sum; // 返回累加和
}