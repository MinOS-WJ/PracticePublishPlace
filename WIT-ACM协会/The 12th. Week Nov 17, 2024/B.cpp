#include <bits/stdc++.h>
using namespace std;
int v[100000010], prime[5770000], cnt, t, n;

int main() {
	for (int i = 2; i <= 100000000; i++) {
		if (!v[i])
			prime[++cnt] = i;
		for (int j = 1; j <= cnt && (long long)prime[j]*i <= 100000000; j++) {
			v[prime[j]*i] = prime[j];
			if (!(i % prime[j]))
				break;
		}
	}
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int ans = 0;
		if (v[n] == 0) {
			printf("%d\n", n);
			continue;
		}
		while (1) {
			if (!v[n]) {
				ans ^= n;
				break;
			}
			ans ^= v[n];
			n /= v[n];
		}
		printf("%d\n", ans);
	}
	return 0;
}