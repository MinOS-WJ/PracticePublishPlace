#include <iostream>
using namespace std;

const int N = 1e7 + 7;

int n, m;
int a[N];
int s[N];

int main() {
	s[0] = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s[i] = a[i] + s[i - 1];
	}
	cin >> m;
	for (int i = 1; i <= m; i++) {
		int l, r;
		cin >> l >> r;
		cout << s[r] - s[l - 1] << endl;
	}
	return 0;
}