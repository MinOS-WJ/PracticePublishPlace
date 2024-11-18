#include <iostream>
using namespace std;

int map[1010][1010] = {0};
int n, m, a, b;

int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 1; i <= n; i++) {
		int sum = 0;
		for (int j = 1; j <= n; j++) {
			if (map[i][j] == 1) {
				sum += map[i][j];
			}
		}
		cout << sum << " ";
		for (int j = 1; j <= n; j++) {
			if (map[i][j] == 1) {
				cout << j << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}