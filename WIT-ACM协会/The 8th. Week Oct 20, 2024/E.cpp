#include <bits/stdc++.h>
using namespace std;

void be(string &s);

int main() {
	string s;
	cin >> s;
	be(s);
	cout << "solution-" << s;
	return 0;

}

void be(string &s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '_')
			s[i] = '-';
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] - 'A' + 'a';
	}
}