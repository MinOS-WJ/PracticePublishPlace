#include <stdio.h>
int lg[8] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};
int main() {
	int s, i, n, digit = 1;
	scanf("%d", &s);
	for (i = 6; i >= 1; i--) {
		if (s % lg[i] != s) {
			digit = i + 1;
			break;
		}
	}
	for (i = 1 ; i <= digit ; i++) {
		n = ( s % lg[i] ) / lg[i - 1];
		printf("%2d", n);
	}
	printf("\ndigit=%d\n", digit);
	return 0;
}
