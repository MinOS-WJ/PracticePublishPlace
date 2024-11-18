#include <bits/stdc++.h>
using namespace std;

int u[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int n, m;

char g[1000][1000];
void dfs(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int xx = x + u[i][0];
		int yy = y + u[i][1];
		if (xx >= 0 && xx < n && yy >= 0 && yy < m && (g[xx][yy] != '0')) {
			g[xx][yy] = '0';
			dfs(xx, yy);
		}
	}
}

int main() {
	int cnt = 0;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%s", g[i]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (g[i][j] != '0') {
				cnt++;
				dfs(i, j);
			}
	printf("%d\n", cnt);
	return 0;
}