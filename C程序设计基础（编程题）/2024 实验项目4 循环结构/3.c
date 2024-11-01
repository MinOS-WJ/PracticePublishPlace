#include <stdio.h>

int main() {
	float sum = 0, term, a = 2, b = 1, c;
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		term = a / b;
		sum += term;
		c = a + b;
		b = a;
		a = c;
	}
	printf("sum=%0.2f\n", sum);
	return 0;
}
