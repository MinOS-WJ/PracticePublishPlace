#include <stdio.h>

int main() {
	long long int sum = 0, term = 1;
	int n;
	scanf("%d", &n);

	if (n == 0) {
		sum = 1;
	} else {
		int i;
		for (i = 1; i <= n; i++) {
			term = 1;
			int j;
			for (j = 1; j <= i; j++) {
				term *= j;
			}
			sum += term;
		}
	}

	printf("sum=%lld\n", sum);
	return 0;
}



