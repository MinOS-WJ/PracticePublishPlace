
/*
#include <bits/stdc++.h>
#define rep(x,y,z) for(int x=(y);x<=(z);x++)
#define per(x,y,z) for(int x=(y);x>=(z);x--)
#define debug(format...) fprintf(stderr, format)
#define fileIO(s) do{freopen(s".in","r",stdin);freopen(s".out","w",stdout);}while(false)
using namespace std;
typedef long long ll;

mt19937 rnd(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
int randint(int L, int R) {
    uniform_int_distribution<int> dist(L, R);
    return dist(rnd);
}

template<typename T> void chkmin(T& x, T y) {if(x > y) x = y;}
template<typename T> void chkmax(T& x, T y) {if(x < y) x = y;}

const int N = 1e4+5;

int n, ans;
short a[N][N];

int main() {
    scanf("%d", &n);
    rep(i, 1, n) {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        ++a[x1][y1];
        --a[x1][y2];
        --a[x2][y1];
        ++a[x2][y2];
    }
    rep(i, 0, 10000) {
        rep(j, 0, 10000) {
            a[i][j] = int(i > 0 ? a[i-1][j] : 0) + (j > 0 ? a[i][j-1] : 0) - (i > 0 && j > 0 ? a[i-1][j-1] : 0) + a[i][j];
            if(a[i][j]) ++ans;
        }
    }
    printf("%d\n", ans);
    return 0;
}
*/