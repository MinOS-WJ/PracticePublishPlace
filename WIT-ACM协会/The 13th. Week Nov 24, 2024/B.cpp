#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[1000];
        int even_sum = 0, odd_sum = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                even_sum += a[i];
            } else {
                odd_sum += a[i];
            }
        }
        
        if (even_sum > odd_sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}