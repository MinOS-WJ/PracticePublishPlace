#include <bits/stdc++.h>
using namespace std;

long long V[30010];
long long T[30010];
long long dp[30010][30010];

int main() {
	int t, m;
	cin >> t >> m;
	for (int i = 1; i <= m; i++) {
		cin >> T[i] >> V[i];
		V[i] *= T[i];
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j <= t; j++) {
			if (j >= T[i])
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - T[i]] + V[i]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[m][t];
	return 0;
}