#include <bits/stdc++.h>

using namespace std;

int main() {
	double sn = 0;
	int k;
	cin >> k;
	for (int i = 1;; i++) {       //循环累加
		sn += (double)1 / i;      //等效于: sn = (double) sn + 1 / i; 
		if (k < sn) {     //判断是否为正确结果
			cout << i;   //打印结果
			return 0;
		}
	}
	return 0;
}
