#include <bits/stdc++.h>
using namespace std;
string s;
int sum, ml, mil = 25000, mp, mip;

int main() {
	getline(cin, s);
	int len = s.size();
	for (int i = 0; i < len; i++) {
		if (s[i] != ' ' && s[i] != ',' && s[i] != '.')
			sum++;
		else if (sum > 0) {
			if (sum > ml) {
				ml = sum;
				mp = i - sum;
			}
			if (sum < mil) {
				mil = sum;
				mip = i - sum;
			}
			sum = 0;
		}
	}
	for (int i = mp; i <= mp + ml - 1; i++)
		cout << s[i];
	cout << "\n";
	for (int i = mip; i <= mip + mil - 1; i++)
		cout << s[i];
	return 0;
}