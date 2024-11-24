#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
inline bool check(int x) {
	while(x) {
		if(x % 10 > 1) {
			return 0;
		}
		x /= 10;
	}
	return 1;
}
signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
	for(int i = 1; i < N; i++) {
		if(check(i)) { vis[i] = 1; continue; }
		for(int j = 1; j * j <= i; j++) {
			if(i % j == 0) {
				if(vis[j] && vis[i / j]) {
					vis[i] = 1;
				}
			}
		}
	}
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << (vis[n] ? "YES\n" : "NO\n");
	}
	return 0;
}