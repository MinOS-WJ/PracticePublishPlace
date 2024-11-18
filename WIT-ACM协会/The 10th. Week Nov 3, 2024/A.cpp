#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 1], b[n + 1];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		copy(a, a + n, b);
		sort(b, b + n);

		int m = unique(b, b + n) - b;

		for (int i = 0; i < n; i++) {
			cout << (lower_bound(b, b + m, a[i]) - b) + 1 << ' ';
		}
		cout << '\n';
	}
	return 0;
}