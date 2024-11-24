#include <bits/stdc++.h>
using namespace std;
int prime[201], c = 1, f[201], n;
bool p[201];

int main() {
	for ( int i = 2; i <= 200; i++ ) {
		if ( !p[i] ) {
			prime[c++] = i;
			for ( int j = i * 2; j <= 200; j += i )
				p[j] = true;
		}
	}
	f[0] = 1;
	for ( int i = 1; i < c; i++ ) {
		for ( int j = prime[i]; j <= 200; j++ ) {
			f[j] += f[j - prime[i]];
		}
	}
	while ( cin >> n )
		printf ( "%d\n", f[n] );
	return 0;
}