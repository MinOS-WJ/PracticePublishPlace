#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        char ch;
        cin >> ch;
        if (ch >= 'a' && ch <= 'z') {
            ans += ch - 'a' + 1;
        } else {
            ans -= ch;
        }
    }
    cout << ans;
    return 0;
}