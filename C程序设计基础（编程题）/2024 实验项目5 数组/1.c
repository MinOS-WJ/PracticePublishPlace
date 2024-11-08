#include <stdio.h>

int main() {
	int a[15], i, x = 0, y = 0, z = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		if (a[i] > 0) {
			x++;
		} else if (a[i] < 0) {
			z++;
		} else {
			y++;
		}

	}
	printf("正数:%d个,零:%d个,负数:%d个\n", x, y, z);
	return 0;
}
