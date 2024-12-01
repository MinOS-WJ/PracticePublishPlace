#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 200010;
// 定义数组a存储原始数据，sum存储前缀和
int a[N], sum[N];

// 主函数
signed main() {
    int t;
    cin >> t;
    // 处理多个测试用例
    while(t--) {
        int n, q;
        cin >> n >> q;
        sum[0] = 0;
        // 输入数据并计算前缀和
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }
        // 处理每个查询
        while(q--) {
            int x, y, k;
            cin >> x >> y >> k;
            // 判断并输出结果
            cout << ((sum[n] + sum[y] - sum[x - 1] + k * (y - x + 1)) & 1 ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}