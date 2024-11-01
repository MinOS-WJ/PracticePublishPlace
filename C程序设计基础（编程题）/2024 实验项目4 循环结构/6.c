#include <stdio.h>

int main() {
	int i, j;
	int n;
	scanf("%d", &n);
	int a[n][n];
	printf("\n");
	for (i = 0; i < n; i++) {
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < n; i++)
		for (j = 1; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
  return 0;
}

/*
//最优算法>>>递归
#include <stdio.h>

long Tri(int r, int c) {
	return (c == 1 || c == r) ? 1 : Tri( r - 1, c - 1 ) + Tri( r - 1, c );
}

int main() {
	int i, j, n;
	scanf("%d", &n);
	for ( i = 1; i <= n; i++) {
		for ( j = 1; j <= i; j++)
			printf("%4d", Tri(i, j));
		printf("\n");
	}
	return 0;
}
*/
