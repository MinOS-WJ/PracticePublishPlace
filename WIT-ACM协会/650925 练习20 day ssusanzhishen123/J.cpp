#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main() {
	string s;
	int ans[3] = {0};  //用于储存答案 ans[0]为a, ans[1]为b, ans[2]为c
	cin >> s;          //读入字符串
	for (int i = 0; i < s.length() - 1; i++) { //每位开始判断
		if (s[i] == '=') //如果判断为 =
			if (s[i + 1] >= '0' && s[i] + 1 <= '9') //如果 = 后面是个数字
				ans[int(s[i - 2]) - 97] = int(s[i + 1] - '0'); //直接赋值 （s[i-2]就是冒号前的子母；-97是因为'a'=97）
		//int(s[i+1]) 是等号后面的字符转换为数值
			else                                        //如果等号后面不是数字（就是字母）
				ans[int(s[i - 2]) - 97] = ans[int(s[i + 1]) - 97]; //ans[int(s[i-2])-97]是冒号前（被赋值）的字母
		//ans[int(s[i+1])-97]是等号后（给赋值）的字母
	}
	cout << ans[0] << " " << ans[1] << " " << ans[2];       //最后输出 a,b,c;
	return 0;
}