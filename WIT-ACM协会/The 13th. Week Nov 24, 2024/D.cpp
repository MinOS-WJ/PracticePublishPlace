#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 200010;
// ��������a�洢ԭʼ���ݣ�sum�洢ǰ׺��
int a[N], sum[N];

// ������
signed main() {
    int t;
    cin >> t;
    // ��������������
    while(t--) {
        int n, q;
        cin >> n >> q;
        sum[0] = 0;
        // �������ݲ�����ǰ׺��
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }
        // ����ÿ����ѯ
        while(q--) {
            int x, y, k;
            cin >> x >> y >> k;
            // �жϲ�������
            cout << ((sum[n] + sum[y] - sum[x - 1] + k * (y - x + 1)) & 1 ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}