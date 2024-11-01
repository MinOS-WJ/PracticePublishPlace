#include <stdio.h>

long long fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	long long prev = 0, curr = 1;
	int i;
	for (i = 2; i <= n; i++) {
		long long next = prev + curr;
		prev = curr;
		curr = next;
	}
	return curr;
}

int main() {
	int t, j;
	scanf("%d", &t);
	for (j = 1; j <= t; j++) {
		printf("%5lld", fibonacci(j));
	}
	return 0;
}


