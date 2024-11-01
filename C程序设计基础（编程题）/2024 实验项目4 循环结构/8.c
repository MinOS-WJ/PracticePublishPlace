#include <stdio.h>

int main() {
	int m, n, max, min, b, c;
	scanf("%d%d", &m, &n);
	c = m % n;
	b = m * n;
	while (c != 0) {
		m = n;
		n = c;
		c = m % n;
	}
	max = n;
	min = b / max;
	printf("greatest common divisor=%d\n", max);
	printf("Least common multiple=%d\n", min);
	return 0;
}


