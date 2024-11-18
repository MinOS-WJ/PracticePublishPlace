#include <iostream>
#include <math.h>
using namespace std;
int n, a[15];
int num = 0;

int f[15] = {0};
void show() {
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
bool solve(int row) {
	for (int j = 1; j < row;
	        j++) {
		if (abs(a[row] - a[j]) == abs(row - j)
		        || a[j] == a[row])
			return false;
	}
	return true;
}
void dfs(int row) {
	if (row == n + 1) {
		num++;
		if (num <= 3) {
			show();
		}
	} else {
		for (int i = 1; i <= n; i++) {
			a[row] = i;
			if (solve(row)) {
				dfs(row + 1);
			}
		}
	}
}
int main() {
	cin >> n;
	dfs(1);
	cout << num << endl;
	return 0;
}