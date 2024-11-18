#include<bits/stdc++.h>
using namespace std;
//¶þ·Ö
struct pos{
	int num;
	int sum;
}a[100010];

bool cmp(pos x,pos y){
	return x.sum <y.sum; 
}

int main(){
	int n,m,q;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].sum ;
		a[i].num= i;
	}
	sort(a+1,a+1+n,cmp);
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>q;
		int l=1,r=n,ans=0;
		while(l<=r){
			int mid=(l+r)/2;
			if(a[mid].sum<=q){
				l=mid+1;
				ans=mid;
			}
			else{
				r=mid-1;
			}
		}
		if(a[ans].sum ==q)
			cout<<a[ans].num <<endl;
		else
			cout<<0<<endl;
	}
	return 0; 
}