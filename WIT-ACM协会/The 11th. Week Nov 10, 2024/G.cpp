#include<bits/stdc++.h>

using namespace std;

int d[10010],u[100010],v[100010];

int main(){
	int n,i,m;
	long long ans=0;
	cin>>n>>m;
	memset(d,0,sizeof(d));
	for(i=0;i<m;i++){
		scanf("%d%d",&u[i],&v[i]);
		d[u[i]]++;
		d[v[i]]++;
	}
	for(i=0;i<m;i++){
		if(d[u[i]]>1&&d[v[i]]>1)
		ans+=(d[u[i]]-1)*(d[v[i]]-1)*2;
	}
	cout<<ans;
	return 0;
}