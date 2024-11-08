#include <stdio.h>
long long fibonacci(int n);

int main() {
	int n, j;
	scanf("%d", &n);
	for (j = 1; j <= n; j++) {
		printf("%6d", fibonacci(j));
		if (j % 5 == 0) {
			printf("\n");
		};
	}
	return 0;
}

long long fibonacci(int n) {
	int i;
	if (n <= 1) {
		return n;
	}
	long long prev = 0, curr = 1;
	for (i = 2; i <= n; i++) {
		long long next = prev + curr;
		prev = curr;
		curr = next;
	}
	return curr;
}

