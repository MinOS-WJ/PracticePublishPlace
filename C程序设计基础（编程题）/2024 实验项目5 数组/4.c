#include <stdio.h>

int k(int n);

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("%3d", k(i));
	}
	return 0;
}

int k(int n) {
	if (n == 1 || n == 2) {
		return n;
	} else {
		return n % 2 == 0 ? k(n - 1) + k(n - 2) : k(n - 1) - k(n - 2);
	}

}
