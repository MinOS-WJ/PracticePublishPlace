#include <stdio.h>
#include <math.h>

int ser(int n) {
	int i, k = 1;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			k = 0;
			break;
		}
	}
	if (k == 1 && n != 1) {
		return n;
	} else {
		return 0;
	}
}

int main() {
	int n, m;
	scanf("%d", &n);
	int i = 1;
	while (i <= n) {
		scanf("%d", &m);
		int k = ser(m);
		if (k != 0) {
			printf("%d ", k);
		}
		i++;
	}
	return 0;
}