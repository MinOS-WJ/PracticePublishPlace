#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	string str;
	cin >> n >> str;
	str = "W" + str + "W";
	++n;
	vector<int> B(n + 5, 0), R(n + 5, 0);
	for (int i = 1; i <= n; ++i) {
		B[i] = B[i - 1];
		R[i] = R[i - 1];
		if (str[i] == 'B')
			++B[i];
		else if (str[i] == 'R')
			++R[i];
	}
	int lst = 0;
	for (int i = 1; i <= n; ++i) {
		if (str[i] == 'W') {
			if (i == lst + 1) {
				lst = i;
				continue;
			}
			if (R[i] - R[lst] == 0 || B[i] - B[lst] == 0) {
				cout << "NO\n";
				return;
			}
			lst = i;
		}
	}
	cout << "YES\n";
}


int main() {

	int T;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}