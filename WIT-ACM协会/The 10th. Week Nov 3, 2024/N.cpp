#include <bits/stdc++.h>
using namespace std;
const int N = 200010;
int T, ans;

int to0(int x) {
	int arr = x, res = 0;
	while (arr) {
		double drr = arr * 1.0;
		drr /= 3.0;
		arr = floor(drr);
		res++;
	}
	return res;
}
int to[N];

int main() {
	cin >> T;
	for (int i = 1; i <= 200000; i++) {
		to[i] = to0(i);
	}
	while (T--) {
		ans = 0;
		int l, r;
		cin >> l >> r;
		for (int i = l; i <= r; i++) {
			ans += to[i];
		}
		ans += to[l];
		cout << ans << endl;
	}
	return 0;
}
