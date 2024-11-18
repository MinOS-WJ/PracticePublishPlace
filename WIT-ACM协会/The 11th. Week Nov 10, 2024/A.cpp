#include <iostream>
#include <algorithm>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int dt[110][110];
bool vis[110][110], flag;
int n, m;
void dfs(int x, int y);
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			char c;
			cin >> c;
			if (c == '#')
				dt[i][j] = 1;
		}
	}

	dfs(1, 1);
	if (flag)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}

void dfs(int x, int y) {
	if (flag)
		return ;

	vis[x][y] = 1;
	if (x == n && y == m) {
		flag = 1;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx < 1 || yy < 1 || xx > n || yy > m)
			continue;
		if (!vis[xx][yy] && !dt[xx][yy])
			dfs(xx, yy);
	}
}