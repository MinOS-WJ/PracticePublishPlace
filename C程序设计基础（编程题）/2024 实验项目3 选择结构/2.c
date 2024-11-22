#include <stdio.h>

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	y = y > 0 ? y : -y;
	printf("s=%d\n", x + y);
	return 0;
}
