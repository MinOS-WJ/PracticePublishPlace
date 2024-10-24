#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstdlib>
#include <algorithm>//文件头不解释
using namespace std;
long long n;
int a[10000];//定义变量不解释

int main() {
	cin >> n; //读入n
	int pd = 0; //判断是否是素数的变量
	for (int i = 2; i < n; i++) {
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				pd = 1;    //如果这个数除了一和它本身还有因数，pd变量为1,退出这层for循环
				break;
			}
		}
		if (pd == 0)
			a[i] = 1; //如果这个数找不到除了1和它本身的数，这个素数的下标加1
		pd = 0;
	}
	for (int i = 4; i <= n; i += 2) { //从4开始，i+=2代表直接跳过奇数
		for (int j = 2; j < n; j++) { //最小的素数为2，就从2开始
			if (a[j] == 1 && a[i - j] == 1) {
				cout << i << '=' << j << '+' << i - j << endl;
				break;
			}//如果j是素数，且当前数-j还是素数，输出并退出这层for循环
		}
	}
	return 0;
}