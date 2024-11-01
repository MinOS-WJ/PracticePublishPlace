#include <stdio.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int i,j;
	for (i = m; i < n; i++) {
		if (i == 1) {
			printf("   2");   //解决m = 1，从1开始到n，输出结果中不包含素数2的问题。
		}
		for (j = 2; j < i; j++) { //不考虑1
			if (i % j == 0) { //如果在中间存在能被i整除的元素，跳出循环
				break;
			} else {
				if (j == i - 1)
					printf("%4d", i);//如果到达最后一个元素后，也不存在整除现象，输出质数
			}
		}
	}
	printf("\n");
	return 0;
}
