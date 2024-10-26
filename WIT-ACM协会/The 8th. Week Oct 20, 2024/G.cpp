#include <bits/stdc++.h>
using namespace std;
int a[10010];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int count = unique(a, a + n) - a;
	if (k <= count) {
		cout << a[k - 1];
	} else {
		cout << "NO RESULT";
	}
	return 0;
}
