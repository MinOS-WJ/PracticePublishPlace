#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n, s, m;
		cin >> n >> s >> m;
		int ln = 0, rn = 0;
		ll time = 0;
		bool ok = false;
		for (int i = 1; i <= n; i++) {
			ll l, r;
			cin >> l >> r;
			if (i == 1 ) {
				rn = r;
				time = l;
				if (time >= s)
					ok = true;
			} else {
				ln = l;
				if (ln - rn >= s)
					ok = true;
				rn = r;
			}
		}
		if (m - rn >= s)
			ok = true;
		if (ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}