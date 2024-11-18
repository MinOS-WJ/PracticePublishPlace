#include <bits/stdc++.h>
using namespace std;

int n, k;
int h[100010];
int w[100010];

bool check(int x) {
	int s = 0;
	for (int i = 1; i <= n; i++)
		s += (h[i] / x) * (w[i] / x);
	if (s >= k)
		return 1;
	else
		return 0;
}
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> h[i] >> w[i];
	int l = 1, r = 100002;
	while (l < r) {
		int mid = (l + r + 1) / 2;
		if (check(mid))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l;
	return 0;
}