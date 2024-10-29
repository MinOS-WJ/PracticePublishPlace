#include <iostream>
#include <cstdio>
using namespace std;

int T, x, y, k;

int main() {
	cin >> T;
	while (T--) {
		cin >> x >> y >> k;
		cout << max((x + k - 1) / k * 2 - 1, (y + k - 1) / k * 2) << endl;
	}
	return 0;
}
