//题目描述
//请统计某个给定范围[L, R][L,R]的所有整数中，数字 2 出现的次数。
//
//比如给定范围[2, 22]，数字22 在数 22中出现了 11次，在数1212 中出现 11次，在数 2020 中出现 1次，在数 21 中出现 1 次，在数 22中出现 2次，所以数字22 在该范围内一共出现了 6次。
//
//输入格式
//2个正整数 L 和 R，之间用一个空格隔开。
//
//输出格式
//数字 22出现的次数。
//
//输入输出样例
//输入 #1
//
//2 22
//输出 #1
//
//6
//输入 #2
//
//2 100
//输出 #2
//
//20//

#include <bits/stdc++.h>
using namespace std;
int x, y, times = 0;

int main() {
	cin >> x >> y;
	for (int i = x; i <= y; i++) {
		int temp = i;
		while (temp != 0) {
			if (temp % 10 == 2)
				times++;
			temp /= 10;
		}
	}
	cout << times;
	return 0;
}