#include <bits/stdc++.h>
using namespace std;
int t;
long long a, b, ans, aa;

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%lld%lld", &a, &b);
		ans = 0;
		aa = a;
		if (a % b) {
			printf("%lld\n", a);
			continue;
		}
		for (long long i = 2; i * i <= b; ++i) {
			if (b % i == 0) {
				long long t2 = 1;
				while (a % i == 0)
					a /= i, t2 *= i;
				while (b % i == 0)
					b /= i, t2 /= i;
				ans = max(ans, aa / t2 / i);
			}
		}
		if (b > 1) {
			long long t2 = 1;
			while (a % b == 0)
				a /= b, t2 *= b;
			ans = max(ans, aa / t2);
		}
		printf("%lld\n", ans);
	}
}