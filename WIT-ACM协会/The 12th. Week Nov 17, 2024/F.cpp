#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n) {
	bool r = n >= 2;
	if (r) {
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				r = false;
				break;
			}
		}
	}
	return r;
}

int main() {
	int a, b; cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (IsPrime(i) && IsPrime((i % 10) * 10 + i / 10)) cout << i << endl;
	}
}
