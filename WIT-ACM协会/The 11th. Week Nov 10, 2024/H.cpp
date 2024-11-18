#include <bits/stdc++.h>
using namespace std;
string st, ed;
int depth;

int hfunc(string st) {
	int ans = 0;
	for (register int i = 0; i < st.size(); ++i) {
		if (st[i] == '0')
			continue;
		int j = ed.find(st[i]), r = i / 3, c = i % 3;
		int x = j / 3, y = j % 3;
		ans += abs(r - x) + abs(c - y);
	}
	return ans;
}

const int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, -1, 1};

bool dfs(int now, int pre) {
	int cnt = hfunc(st);
	if (!cnt)
		return 1;
	if (now + cnt > depth)
		return 0;
	int pos = st.find('0'), x = pos / 3, y = pos % 3;
	for (register int i = 0; i < 4; ++i) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 0 || nx > 2 || ny < 0 || ny > 2 || nx * 3 + ny == pre)
			continue;
		swap(st[pos], st[nx * 3 + ny]);
		if (dfs(now + 1, pos))
			return 1;
		swap(st[pos], st[nx * 3 + ny]);
	}
	return 0;
}
int main() {
	cin >> st;
	ed = "123804765";
	depth = hfunc(st);
	while (depth <= 27 && !dfs(0, -1))
		++depth;
	cout << depth << endl;
}