#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= 26; i++) {
		char ch = 'A' + (n + i - 1) % 26;
		cout << ch;
	}
	return 0;
}
