#include <iostream>
using namespace std;

int main() {
	unsigned int n, m, h, l;
	cin >> n;
	h = n >> 16;
	l = n << 16;
	m = h | l;
	cout << m << endl;
	return 0;
}
