#include <bits/stdc++.h>
using namespace std;
const int N = 300010;
long long int n, m, l, r, ans, mid, a[N];
bool check(long long int x) {
	long long int sum = 0;
	for (int i = 1; i <= m; i++) {
		sum += a[i] / x;
		if (a[i] % x != 0)
			sum++;
	}
	return sum <= n;
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
		r += a[i];
	}
	while (l <= r) {
		mid = (l + r) >> 1;
		if (check(mid)) {
			r = mid - 1;
			ans = mid;
		} else
			l = mid + 1;
	}
	cout << ans << endl;
	return 0;
}
