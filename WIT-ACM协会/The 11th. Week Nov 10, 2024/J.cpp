#include <bits/stdc++.h>
using namespace std;
#define int long long
int T, n;

pair<int, int> a[300010];

void solve() {
	set<int> st;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i].first;
		a[i].first += i - 1;
		a[i].second = i;
	}
	sort(a + 1, a + n + 1);
	st.emplace(n);
	for (int i = 1; i <= n; ++i) {
		if (st.count(a[i].first)) {
			st.emplace(a[i].first + a[i].second - 1);
		}
	}
	cout << *st.rbegin() << '\n';
}

signed main() {
	cin >> T;
	while (T--)
		solve();
}