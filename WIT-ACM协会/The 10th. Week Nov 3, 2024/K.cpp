#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a1, a2, b1, b2;
		cin >> a1 >> a2 >> b1 >> b2;
		int count = 0;
		int a[2] = {a1, a2}, b[2] = {b1, b2};
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				int suneet = 0, slavic = 0;
				if (a[i] > b[j]) {
					suneet++;
				} else if (a[i] < b[j]) {
					slavic++;
				}
				if (a[1 - i] > b[1 - j]) {
					suneet++;
				} else if (a[1 - i] < b[1 - j]) {
					slavic++;
				}
				if (suneet > slavic) {
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}