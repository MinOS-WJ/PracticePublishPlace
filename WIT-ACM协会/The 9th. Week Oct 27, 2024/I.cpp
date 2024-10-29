#include <bits/stdc++.h>
using namespace std;
const int N = 5 * 1e6 + 10;
int n, q;
int x, y, z;
int p[N], d[N];

int main() {
	cin >> n >> q;
	for (int i = 1; i <= n; i ++) {
		cin >> p[i];
	}
	while (q --) {
		cin >> x >> y >> z;
		d[x] += z, d[y + 1] -= z;
	}
	int minv = 1 << 30;
	for (int i = 1; i <= n; i ++) {
		d[i] += d[i - 1];
		minv = min(minv, p[i] + d[i]);
	}
	cout << minv << endl;
	return 0;
}
