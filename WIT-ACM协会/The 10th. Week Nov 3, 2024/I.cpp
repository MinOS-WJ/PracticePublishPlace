#include <bits/stdc++.h>
using namespace std;
int t, n, q, a[150005], sum[150005], x;

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &q);
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			sum[i] = 0;
		}
		sort(a + 1, a + n + 1, cmp);
		for (int i = 1; i <= n; i++) {
			sum[i] = a[i] + sum[i - 1];
		}
		for (int i = 1; i <= q; i++) {
			scanf("%d", &x);
			printf("%d\n", sum[n] >= x ? lower_bound(sum + 1, sum + n + 1, x) - sum : -1);
		}
	}
	return 0;
}