#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;    //传入原始数据
	cin >> n;

	for (int i = 2; i <= n; i++)   //循环穷举出处1以外的最小因数，进而得出最大的因数为最小因数的倒数
		if (n % i == 0) {
			cout << n / i;       //打印正确结果
			break;
		}

	return 0;
}