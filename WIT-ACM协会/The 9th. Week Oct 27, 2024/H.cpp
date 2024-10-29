#include <iostream>
using namespace std;
int n, a[5005][5005], g[5005][5005], f[5005][5005], ans = -2147483648, ch = 1, che = 1, m, c;

int main() {
	cin >> n >> m >> c;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> g[i][j];
			a[i][j] = a[i][j - 1] + g[i][j];
			f[i][j] = f[i - 1][j] + a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j + c - 1 > m || i + c - 1 > n)
				continue;
			int q = ans;
			ans = max(ans, f[i + c - 1][j + c - 1] + f[i - 1][j - 1] - f[i - 1][j + c - 1] - f[i + c - 1][j - 1]);
			if (ans != q) {
				ch = i;
				che = j;
			}
		}
	}


	cout << ch << " " << che;
	return 0;
}