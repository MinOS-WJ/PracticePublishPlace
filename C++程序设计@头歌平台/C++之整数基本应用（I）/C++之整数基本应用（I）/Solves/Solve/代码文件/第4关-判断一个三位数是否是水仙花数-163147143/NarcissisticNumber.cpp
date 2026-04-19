//判断一个三位数是否是水仙花数
bool NarcissisticNumber(int n)
{
    // 请在此添加实现代码
    // 检查是否为三位数
    if (n < 100 || n > 999) {
        return false;
    }

    // 提取各个位上的数字
    int hundreds = n / 100;    // 百位
    int tens = (n / 10) % 10;  // 十位
    int units = n % 10;        // 个位

    // 计算各个位数字的立方和
    int sum = hundreds * hundreds * hundreds +
              tens * tens * tens +
              units * units * units;

    // 判断立方和是否等于原数
    return sum == n;
}