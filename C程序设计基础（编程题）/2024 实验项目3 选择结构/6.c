#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	double d;
	float ans0, ans1;
	scanf("%f%f%f", &a, &b, &c);

	if (a == 0 && b == 0) {
		printf("此方程没有解\n");
	} else if (a == 0) {
		ans0 = -(c / b);
		printf("x=%f\n", ans0);
	} else {
		d = (b * b ) - (4 * a * c);
		if (d < 0) {
			printf("此方程无实根\n");
		} else if (d == 0) {
			ans0 = (-b + sqrt(d)) / (2 * a);
			printf("此方程有两个相等实根:x1=x2=%f\n", ans0 );
		} else if (d > 0) {
			ans0 = (-b + sqrt(d)) / (2 * a);
			ans1 = (-b - sqrt(d)) / (2 * a);
			printf("此方程有两个实根:x1=%f,x2=%f\n", ans0, ans1);
		}
	}
	return 0;
}
