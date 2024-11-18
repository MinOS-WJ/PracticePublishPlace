#include <iostream>
#include <algorithm>
using namespace std;
int n, t, m, mid;
int a[100010], b[100010];
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= m; i++)
		cin >> b[i];
	int k = 1;
	sort(b + 1, b + 1 + m);//≈≈–Ú
	for (int i = 1; i <= n; i++) {
		int l = 1;
		int h = m;
		while (l <= h) {//∂˛∑÷
			mid = (l + h) / 2;
			if (b[mid] == a[i]) {
				cout << a[i] << ' ';
				break;
			} else if (b[mid] > a[i])
				h = mid - 1;
			else if (b[mid] < a[i])
				l = mid + 1;
			else
				break;
		}
	}
	return 0;
}
