#include <bits/stdc++.h>

using namespace std;
string s[1024][2048];

int a[4] = { 1, 2, 2, 4 };
int h = 2, l = 4;
void turn_right() {
	for (int i = 0; i < h; i++)
		for (int j = 0; j < l; j++)
			s[i][l + j] = s[i][j];
}
void turn_down() {
	for (int i = 0; i < h; i++)
		for (int j = 0; j < l; j++)
			s[h + i][l / 2 + j] = s[i][j];
}
int main() {
	int n;
	for (int i = 0; i < 1024; i++)
		for (int j = 0; j < 2048; j++)
			s[i][j] = " ";
	cin >> n;
	n -= 1;
	s[0][0] = s[1][1] = "/";
	s[0][1] = s[0][2] = "_";
	s[0][3] = s[1][2] = "\\";
	for (int i = 0; i < n; i++) {
		turn_right();
		turn_down();
		h *= 2;
		l *= 2;
	}
	for (int i = h - 1; i >= 0; i--) {
		for (int j = 0; j < l; j++)
			cout << s[i][j];
		cout << endl;
	}
	return 0;
}
