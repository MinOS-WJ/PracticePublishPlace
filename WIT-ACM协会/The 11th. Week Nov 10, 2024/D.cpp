#include <stdio.h>

int isprime(int n);
void func(int n, int m);

int a[25], b[25], n, k, t = 0;

int main() {
	int i;
	scanf("%d%d", &n, &k);
	int b[k];
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	func(n, k);
	printf("%d", t);
}

void func(int n, int m) {
	int i, sum;
	if (m == 0) {
		sum = 0;
		for (i = 0; i < k; i++)
			sum += b[i];
		if (isprime(sum))
			t++;
		return;
	}
	for (i = n ; i >= m; i--) {
		b[m - 1] = a[i];
		func(i - 1, m - 1);
	}
}

int isprime(int n) {//IS_PRIMW??
	int i;
	for (i = 2; i < n; i++)
		if (n % i == 0)
			break;
	if (i == n || n == 2)
		return 1;
	else
		return 0;
}