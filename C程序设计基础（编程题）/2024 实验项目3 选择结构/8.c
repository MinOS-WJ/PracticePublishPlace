#include <stdio.h>

int main() {
	int a, b, c, d, e, x;
	scanf("%d", &x);

	if (x <= 0) {
		printf("输入数据非正整数或为0");
	} else {

		a = x / 10000;
		b = x % 10000 / 1000;
		c = x % 1000 / 100;
		d = x % 100 / 10;
		e = x % 10;
		if (a != 0) {
			printf("五位数:%d,%d,%d,%d,%d\n", a, b, c, d, e);
		} else if (b != 0) {
			printf("四位数:%d,%d,%d,%d\n", b, c, d, e);
		} else if (c != 0) {
			printf("三位数:%d,%d,%d\n", c, d, e);
		} else if (d != 0) {
			printf("二位数:%d,%d\n", d, e);
		} else if (e != 0) {
			printf("个位数:%d\n", e);
		}
	}
  return 0;
}
