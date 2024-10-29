#include <bits/stdc++.h>
using namespace std;
int n, m, a[1005][1005];

int main() {
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	for (int i = 1; i <= m; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j <= x2; j++) {
			a[j][y1]++;
			a[j][y2 + 1]--;	// ²î·Ö
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j] += a[i][j - 1];
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}