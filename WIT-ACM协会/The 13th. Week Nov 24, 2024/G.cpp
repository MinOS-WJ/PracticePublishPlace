#include <bits/stdc++.h>

using namespace std;

int dp[1010], fact[1010];

int main() {
    int s, i, j;
    cin>>s;
    for (i = 2; i <= s; i++) {
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                if (i / j != j) fact[i] += j + i / j;
                else fact[i] += j;
            }
        }
        fact[i]++;
    }
    for (i = 2; i <= s; i++) {
        dp[i] = fact[i];
        for (j = 1; j < i; j++) {
            if (dp[i] < dp[i - j] + fact[j]) dp[i] = dp[i - j] + fact[j];
        }
    }
    cout<<dp[s];
    return 0;
}