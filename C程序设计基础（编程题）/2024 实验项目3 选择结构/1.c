#include <stdio.h>

int main() {
	int x, y;
	scanf("%d", &x);
	if (x < 1) {
		y = x;
	}
	if (1 <= x && x < 10) {
		y = 2 * x - 1;
	}
	if (x >= 10) {
		y = 3 * x - 11;
	}
	printf("y=%d\n", y);

	return 0;
}


