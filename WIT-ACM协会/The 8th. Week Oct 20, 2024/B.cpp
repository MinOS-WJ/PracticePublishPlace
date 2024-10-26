#include <stdio.h>

int main (void) {
	char a ;
	int i, j ;
	scanf("%c", &a);
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3 - i; j++) {
			printf(" ");
		}
		for (j = 1; j < i * 2; j++) {
			printf("%c", a);
		}
		printf("\n");
	}
	return 0;
}