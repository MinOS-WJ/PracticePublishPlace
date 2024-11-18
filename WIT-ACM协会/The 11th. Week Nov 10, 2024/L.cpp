#include <bits/stdc++.h>

using namespace std;

int tong[200010];

int a[200010];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        int m;
        cin >> m;
        for (int j = 1; j <= m; j ++)
            tong[j] = 0;
        for (int j = 1; j <= m; j ++)
            cin >> a[j];
        for (int j = 1; j <= m; j ++)
            tong[a[j]] ++;
        int idx = -1;
        for (int j = 1; j <= m; j ++)
            if (tong[j] >= 3) {
                idx = j;
                break;
            }
        cout << idx << '\n';
    }
    return 0;
}