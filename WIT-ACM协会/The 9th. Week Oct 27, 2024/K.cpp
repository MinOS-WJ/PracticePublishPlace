#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 200010;
char s[N], t[N];

int main() {
	int T;
	scanf("%d", &T);
	while (T -- ) {
		scanf("%s%s", s + 1, t + 1);
		int n = strlen(s + 1), m = strlen(t + 1);
		int j = 1;
		for (int i = 1; i <= n; i ++ ) {
			char c = s[i];
			if (j <= m && (c == '?' || c == t[j])) {
				if (c == '?')
					s[i] = t[j];
				j ++ ;
			} else if (c == '?')
				s[i] = 'a';
		}
		if (j == m + 1) {
			puts("YES");
			for (int i = 1; i <= n; i ++ )
				printf("%c", s[i]);
			puts("");
		} else
			puts("NO");
	}
	return 0;
}