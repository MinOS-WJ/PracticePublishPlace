#include <bits/stdc++.h>

const int MAXM = 1e5 + 2;
int a[MAXM];
const int MAXN = 1e5 + 2;
int b[MAXM];
int main() {
	int n, m;
	scanf("%d%d", &m, &n);
	int i;
	for (i = 0; i < m; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	std::sort(a, a + m);
	unsigned long long ans = 0;
	for (i = 0; i < n; i++) {
		int lo = std::lower_bound(a, a + m, b[i]) - a;
		int hi = std::upper_bound(a, a + m, b[i]) - a;
		if (lo == hi) {
			if (0 == lo) {
				ans += (a[lo] - b[i]);
			} else if (hi >= m) {
				ans += (b[i] - a[hi - 1]);
			} else {
				ans += std::min(b[i] - a[lo - 1], a[hi] - b[i]);
			}
		}
	}
	printf("%llu\n", ans);
	return 0;
}