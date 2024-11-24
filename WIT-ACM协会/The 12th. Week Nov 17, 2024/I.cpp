#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e6 + 10;

int n, m, t;
int primes[maxn], cnt, num[maxn];
bool vis[maxn];

void init(int n)
{
    vis[1] = 1;
    for(int i = 2; i <= n; ++i) {
        if(vis[i] == 0) {
            primes[++cnt] = i;
            num[i] = 1;
        }
        for(int j = 1; j <= cnt && i * primes[j] <= n; ++j) {
            vis[i * primes[j]] = 1;
            if(i % primes[j] == 0) break;
        }
    }
    for(int i = 1; i <= n; ++i) {
        num[i] += num[i - 1];
    }
}

int main()
{
    init(maxn);
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        int down = floor(sqrt(n));
        printf("%d\n", num[n] - num[down] + 1);
    }
    return 0;
}