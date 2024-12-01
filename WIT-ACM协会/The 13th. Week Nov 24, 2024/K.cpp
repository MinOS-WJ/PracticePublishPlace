#include<bits/stdc++.h>
using namespace std;

int n,a[200010],b[200010],i,ans=-0x7fffffff;

int main(){
   cin>>n;
   for(i=1;i<=n;i++){
       cin>>a[i];
       if(i==1) b[i]=a[i];
       else b[i]=max(a[i],b[i-1]+a[i]);
       ans=max(ans,b[i]);
   }
   cout<<ans;
   return 0;
}