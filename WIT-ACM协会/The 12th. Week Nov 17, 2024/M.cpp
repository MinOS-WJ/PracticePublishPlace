#include <bits/stdc++.h>
using namespace std;

void transtime()
{
    int n,m;
    scanf("%d:%d",&n,&m);
    if(!n) printf("12:%02d AM\n",m);
    if(0<n&&n<12) printf("%02d:%02d AM\n",n,m);
    if(n==12) printf("12:%02d PM\n",m);
    if(12<n&&n<=23) printf("%02d:%02d PM\n",n-12,m);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        transtime();
    }
    return 0;
}