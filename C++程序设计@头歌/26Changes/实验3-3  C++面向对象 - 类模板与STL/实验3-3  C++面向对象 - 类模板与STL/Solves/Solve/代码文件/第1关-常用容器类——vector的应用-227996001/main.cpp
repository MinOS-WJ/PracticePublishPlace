#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int start, end;
    cin >> start >> end;

    // 对下标 [start, end] 范围内的元素降序排序
    sort(v.begin() + start, v.begin() + end + 1, greater<int>());

    // 输出排序后的那一段
    for (int i = start; i <= end; i++) {
        cout << v[i];
        if (i < end) cout << " ";
    }
    cout << endl;

    return 0;
}