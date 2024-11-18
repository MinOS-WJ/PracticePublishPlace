#include <bits/stdc++.h>
using namespace std;
#define maxn 35
int a[maxn][maxn], n;

int dx[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
void bfs(int x, int y) {
	a[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int ux = x + dx[i][0], uy = y + dx[i][1];
		if (ux >= 0 && ux <= n + 1 && uy >= 0 && uy <= n + 1 && a[ux][uy] == 2) {
			bfs(ux, uy);
		}
	}
}
int main() {
	for (int i = 0; i < 35; i++)
		for (int j = 0; j < 35; j++)
			a[i][j] = 2;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int s;
			cin >> s;
			if (s == 1)
				a[i][j] = 1;
		}
	}

	bfs(0, 0);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}