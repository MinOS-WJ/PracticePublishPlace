#include <bits/stdc++.h>
using namespace std;
int n;
string s, t;

int main() {
	cin >> n;
	while (n--) {
		cin >> s >> t;
		int i = 0, j = 0;
		while (i < s.length() && j < t.length()) {
			if (s[i] == '?') {
				s[i] = t[j];
				i++;
				j++;
			} else if (s[i] == t[j]) {
				i++;
				j++;
			} else {
				i++;
			}
		}
		for (int k = 0; k < s.length(); k++) {
			if (s[k] == '?') {
				s[k] = 'a';
			}
		}

		if (j == t.length()) {
			cout << "YES\n" << s << endl;
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}