#include <stdio.h>
#include <math.h>

int main() {
	double x, k, n, i, a, b, c, d, flag;
	scanf("%lf", &x);
	k = 0.000001;
	c = 1;
	n = 2;
	a = 1;
	b = 1;
	flag = -1;
	do {
		for (i = 1; i <= n; i++) {
			a = a * i;
		}
		b = 1 / a;
		d = c;
		c = c + flag * pow(x, n) * b;
		flag = -flag;
		n += 2;
		a = 1;
	} while (fabs(c - d) > k);
	printf("%f", c);
	return 0;
}
