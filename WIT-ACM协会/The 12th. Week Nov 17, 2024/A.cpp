#include <iostream>
using namespace std;
int main() {
	int t;
	for (cin >> t; t; --t) {
		long long n;
		cin >> n;
		long long m = n;
		for (int i = 2; 1ll * i * i <= n; ++i) {
			while (m % i == 0) {
				m /= i;
				cout << i << ' ';
			}
		}
		if (m != 1) {
			cout << m;
		}
		cout << endl;
	}
}