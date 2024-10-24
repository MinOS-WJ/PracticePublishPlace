#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	if ((x < 60 && y >= 60 && z >= 60) || (x >= 60 && y < 60 && z >= 60) || (x >= 60 && y >= 60 && z < 60))
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}