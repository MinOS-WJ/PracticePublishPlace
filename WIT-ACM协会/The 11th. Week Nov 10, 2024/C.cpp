#include <bits/stdc++.h>
using namespace std;
int n;
int ans[10];
int use[10];

void dfs(int x) {
	if (x > n) {
		for (int i = 1; i <= n; i++) {
			printf("% 5d", ans[i]);
		}
		puts("");
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!use[i]) {
			ans[x] = i;
			use[i] = 1;
			dfs(x + 1);
			use[i] = 0;
		}
	}
}

int main() {
	scanf("%d", &n);
	dfs(1);
}