#include <bits/stdc++.h>  //万能头文件

using namespace std;

int main() {
	int ans = 0, cnt = 0, idx = 0;
	for (int i = 1; i <= 7; i++) {   //星期记录
		int s, f;
		cin >> s >> f;  //传入数据
		if (s + f > 8) {
			cnt++;          //不高兴天数计数
			if ((s + f) > ans) {
				ans = s + f;     //取最不高兴的一天，且相同靠前取
				idx = i;
			}
		}
	}
	if (cnt == 0) {   //若没有不高兴的天数，返回0
		cout << 0;
		return 0;
	}
	cout << idx;     //打印结果
	return 0;
}