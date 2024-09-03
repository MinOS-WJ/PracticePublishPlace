#include <stdio.h>

int main() {
	int s, t03, v, t01, t02, h, m;
	scanf("%d%d", &s, &v);
	if (s % v != 0)          //奇妙解决向上取整问题
		t01 = s / v + 1 + 10;
	else
		t01 = s / v + 10;
	t02 = 480 - t01;
	if (t02 > 0) {         //时间进制转换
		h = t02 / 60;
		m = t02 % 60;
	} else {
		t03 = 24 * 60 + t02;
		h = t03 / 60;
		m = t03 % 60;
	}

	printf("%02d:%02d", h, m);

	return 0;
}