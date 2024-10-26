#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, money = 8;
	char opt;

	cin >> m >> opt;

	if (m > 1000) {
		m -= 1000;
		money = money + m / 500 * 4;
		if (m % 500 != 0) {
			money = money + 4;
		}
	}
	if (opt == 'y') {
		money = money + 5;
	}

	cout << money;

	return 0;
}