#include <bits/stdc++.h>
using namespace std;
int n, a[100010], ans = -0x7fffffff;
int main()
{
	scanf("%d", &n);
	for (register int i = 1; i <= n; i++) 
	{
		scanf("%d", &a[i]);
		a[i] = max(a[i], a[i] + a[i - 1]);
		ans = max(a[i], ans);
	}
	printf("%d\n", ans);
	return 0;
}