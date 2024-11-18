#include <iostream>
#include <map>
using namespace std;
long long a[200001];
map<long long, long long> m;

int main() {
	int n;
	long long c;
	long long ans = 0;
	cin >> n >> c;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		m[a[i]]++;
		a[i] -= c;
	}
	for (int i = 1; i <= n; i++)
		ans += m[a[i]];
	cout << ans << endl;
	return 0;
}