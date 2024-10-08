#include <stdio.h>

int main() {
	int N, S = 0, a = 0, T = 0;
	scanf("%d", &N);    //获取数据
	if (N < 0) {        //判断正负，并反转化为正数处理
		N = 0 - N;
		T = 1;          //记录是否经过反转，可以当作布尔值处理
	}

	for (int i = 0; i < 10; i++) {       //循环进行倒序操作
		int b = N / 10;
		a = N - b * 10;    //取得当前N的最后一位数
		N = N / 10;       //隐藏强制将相除得到的浮点数转为整数，实现消去当前N的最后一位
		S = S + a;         //计入结果
		S = S * 10;       //向前进1位，为下一个循环计入结果准备
		if (N < 10) {      //优化和解决个位数输入造成的较特殊情况
			a = N;
			S = S + a;
			break;
		}
	}

	if (T == 1) {       //已经过翻转的数据还原成正确结果
		S = 0 - S;
	}
	printf("%d\n", S);
	return 0;
}