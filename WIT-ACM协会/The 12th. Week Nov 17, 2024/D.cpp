#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 10;

template <typename T>

inline T read(T &x) {
	x = 0;
	T w = 1;
	char ch = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-')
			w = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		x = x * 10 + (ch - '0');
		ch = getchar();
	}
	return x * w;
}

bool not_prime[4010];
int prime[4010], tot;

void init(int n) {
	for (int i = 2; i <= n; i++)
		if (!not_prime[i]) {
			prime[++tot] = i;
			for (int j = i + i; j <= n; j += i)
				not_prime[j] = 1;
		}
}

inline bool check(ll x) {
	ll y = pow(x, 0.5);
	if (y * y == x || (y + 1) * (y + 1) == x)
		return true;
	y = pow(x, 1.0 / 3);
	if (y * y * y == x || (y + 1) * (y + 1) * (y + 1) == x || (y + 2) * (y + 2) * (y + 2) == x)
		return true;
	return false;
}

int main() {
	init(4000);
	int T;
	read(T);
	while (T--) {
		ll x;
		read(x);
		if (check(x)) {
			puts("yes");
			continue;
		}
		bool flag = true;
		for (int i = 1; i <= tot; i++)
			if (x % prime[i] == 0) {
				int now = 0;
				while (x % prime[i] == 0) {
					now++;
					x /= prime[i] ;
				}
				if (now == 1) {
					flag = false;
					break;
				}
			}
		if (flag & check(x)) {
			puts("yes");
			continue;
		} else {
			puts("no");
		}
	}
	return 0;
}

