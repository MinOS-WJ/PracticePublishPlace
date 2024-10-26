#include <cstdio>
using namespace std;

int main() {
	int n, m, s = 0;
	scanf("%d%d", &n, &m);
	bool visit[200] = {0};
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < m; i++) {
			if (++s > n)
				s = 1;
			if (visit[s])
				i--;
		}
		printf("%d ", s);
		visit[s] = true;
	}
	return 0;
}