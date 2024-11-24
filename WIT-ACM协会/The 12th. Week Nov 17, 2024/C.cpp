#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

const int n = 31650, m = 1000000;

long long pow3[m + 10];
int plist[3510], cnt;

bool p[40010]; 
void prime() {
	int sq = sqrt(n) + 0.5;
	for(int i=2; i<=n; i++) p[i] = true;
	p[1] = false;
	for(int i=2; i<=sq; i++) if(p[i])
		for(int j=i*i; j<=n; j+=i) p[j] = false;
	for(int i=1; i<=n; i++) if(p[i]) plist[++ cnt] = i;
}

int main() {
	prime();
	for(long long i=1; i<=m; i++) pow3[i] = i*i*i;
	int t; long long x; 
	scanf("%d", &t);
	while(t --) {
		long long ans = 1, c;
		scanf("%lld", &x);
		for(int i=1; i<=cnt && plist[i] <= x; i++) {
			c = 0;
			while(x % plist[i] == 0) {
				c ++; x /= plist[i];
				if(c == 3) ans *= plist[i], c = 0;
			}
		}
		long long k = lower_bound(pow3+1, pow3+m+1, x) - pow3;
		printf("%lld\n", ans*(k*k*k == x ? k : 1)); 
	}
	return 0;
}