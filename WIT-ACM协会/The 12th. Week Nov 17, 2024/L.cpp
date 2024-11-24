#include <bits/stdc++.h>
using namespace std;
int T, n;
int main(){
    cin >> T;
    while (T--){
        cin >> n;
        for (int i = 1; i <= 2 * n; i++){
            int x = (i + 1) / 2;
            if (x & 1){
                for (int j = 1; j <= 2 * n; j++){
                    x = (j + 1) / 2;
                    if (x & 1) cout << "#";
                    else cout << ".";
                }
            }else{
                for (int j = 1; j <= 2 * n; j++)
                {
                    x = (j + 1) / 2;
                    if (x & 1) cout << ".";
                    else cout << "#";
                }
            }
            cout << endl;
        }
    }
    return 0;
}