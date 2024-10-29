#include <stdio.h>
#include <math.h>

int x[200000], y[200000];
long long count;
int c0[200000], c1[200000];

int main() {
	int t, n;
	scanf("%d", &t);
	int i, j, k, m;
	for (i = 0; i < t; i++) {
		count = 0;
		scanf("%d", &n);
		for (j = 0; j < n; j++) {
			scanf("%d%d", &x[j], &y[j]);
			if (y[j] == 0)
				c0[x[j]]++;
			if (y[j] == 1)
				c1[x[j]]++;
		}
		for (j = 0; j <= n; j++) {
			if (c0[j] && c1[j])
				count += n - 2;
			if (j - 2 >= 0 && c0[j] && c0[j - 2] && c1[j - 1])
				count++;
			if (j - 2 >= 0 && c1[j] && c1[j - 2] && c0[j - 1])
				count++;
		}
		for (j = 0; j < n; j++) {
			if (y[j] == 0)
				c0[x[j]] = 0;
			if (y[j] == 1)
				c1[x[j]] = 0;
		}
		printf("%lld\n", count);
	}
	return 0;
}