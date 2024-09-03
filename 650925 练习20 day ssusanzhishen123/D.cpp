#include <bits/stdc++.h>

using namespace std;

int a[15];   //定义数组

int main () {
	int b, num = 0;
	for (int i = 1; i <= 10; i++)   //循环录入数据
		cin >> a[i];

	cin >> b;

	for (int i = 1; i <= 10; i++)    //循环判断是否可以摘到苹果
		if (a[i] <= b + 30)
			num++;

	cout << num << endl; //打印结果
}
