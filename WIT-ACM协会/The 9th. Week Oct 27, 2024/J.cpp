#include <iostream>
#define ll long long
using namespace std;

const int N = 1e4 + 7;

int n;
int a[N];
ll s[N][N];
ll maxi = -0x3f3f3f3f;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i];
			s[i][j] = a[i] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= i; k++) {
				for (int l = 1; l <= j; l++) {
					ll t = s[i][j] - s[k - 1][j] - s[i][l - 1] + s[k - 1][l - 1];
					maxi = (t > maxi) ? t : maxi;
				}
			}
		}
	}
	cout << maxi << endl;
	return 0;
}
