#include <bits/stdc++.h>
using namespace std;

int fuck(int n, int m) {
	if (n == 1 || m == 1)
		return 1;
	return fuck(n - 1, m) + fuck(n, m - 1);
}

int main () {
	int n;
	cin >> n;
	cout << fuck(n, n) << endl;
	return 0;
}