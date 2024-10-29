#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long x = 0;
	for (int i = 1; i <= n; ++i) {
		long long a;
		cin >> a;
		x = x ^ a;
	}
	cout << x  << " 0" << endl;
}