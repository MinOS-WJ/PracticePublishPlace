#include <stdio.h>

int main() {
	float sum = 0, term, a = 2, b = 1, c;
	int i = 1, n;
	scanf("%d", &n);
	do {
		term = a / b;
		sum += term;
		c = a + b;
		b = a;
		a = c;
		i++;
	} while (i <= n);
	printf("sum=%0.2f\n", sum);
	return 0;
}
