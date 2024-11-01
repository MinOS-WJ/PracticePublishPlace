#include <stdio.h>

int main() {
	float sum = 0, term, a = 2, b = 1, c;
	int i = 1, n;
	scanf("%d", &n);
	while (i <= n) {
		term = a / b;
		sum += term;
		c = a + b;
		b = a;
		a = c;
		i++;
	}
	printf("sum=%0.2f\n", sum);
	return 0;
}
