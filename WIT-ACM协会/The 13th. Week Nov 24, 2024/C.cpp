#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		string s;
		cin >> s; 
		int a[256];
        for (int i = 0; i <256; ++i) {
            a[i] = -1;
        }
		bool flag=true;
		for (int i=0;i<s.size();i++){
			if (a[s[i]] == -1){
				a[s[i]] = i%2;
			}
			else {
				if (a[s[i]] != i%2){
					cout << "NO" << endl;
					flag = false;
					break;
				}
			}
		}
		if (flag){
			cout << "YES" << endl;
		}
	} 
	return 0;
}