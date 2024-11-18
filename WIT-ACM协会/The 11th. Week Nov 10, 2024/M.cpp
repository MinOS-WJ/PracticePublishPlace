#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n);
		for(auto &i:a)cin>>i;
		for(int i=0;i<n-2;i++){
			if(((a[i]%2==1)&&(a[i+2]%2==0)) || ((a[i]%2==0)&&(a[i+2]%2==1))){
				cout<<"NO"<<endl;goto minos;
			}
		}
		cout<<"YES"<<endl;
		minos:{}
	}
	return 0;
}