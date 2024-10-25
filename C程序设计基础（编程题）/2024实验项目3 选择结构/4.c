#include <stdio.h>

int main() {
	float x, y;
	char op;
	scanf("%f%c%f", &x, &op, &y);
	if (op == '+') {
		printf("s=%f\n", x + y);
	}
	if (op == '-') {
		printf("s=%f\n", x - y);
	}
	if (op == '*') {
		printf("s=%f\n", x * y);
	}
	if (op == '/') {
		printf("s=%f\n", x / y);
	}
	return 0;
}
