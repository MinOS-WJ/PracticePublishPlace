#include <iostream>
using namespace std;

const int N = 110, M = 10010;
int n, m;
int a[N];
int f[M];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);

    f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= a[i]; j--)
            f[j] += f[j - a[i]];

    printf("%d\n", f[m]);

    return 0;
}
