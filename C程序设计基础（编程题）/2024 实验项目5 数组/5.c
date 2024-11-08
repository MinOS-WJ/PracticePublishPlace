#include <stdio.h>

int main() {
	char a[10];
	int i, j, k;
	for (i = 0; i < 10; i++) {
		scanf("%c", &a[i]);
	}
	for (j = 9; j > 0; j--) {
		for (k = 0; k < j; k++) {
			if (a[k] > a[k + 1]) {
				char c = a[k];
				a[k] = a[k + 1];
				a[k + 1] = c;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%2c", a[i]);

	}
	return 0;
}
