#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned int n, q, k, ans = 0;
	cin >> n >> q;
	for (int i = 1; i <= q; i++) {
		cin >> k;
		k--;
		int temp = n;
		if ((n >> k) % 2 == 0)
			n = ((n >> k) + 1) << k;
		ans += n - temp;
	}
	cout << ans;
	return 0;
}