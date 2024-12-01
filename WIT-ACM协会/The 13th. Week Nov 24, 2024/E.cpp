#include<iostream>
#include<cstring>

using namespace std;
#define ll long long
inline ll read() {
	ll x=0,f=1;char c=getchar();
	while(c<'0'||c>'9') {if(c=='-') {f=-1;} c=getchar();}
	while(c>='0'&&c<='9') {x=(x<<3)+(x<<1)+(c^48);c=getchar();}
	return x*f;
}
int t;
int n,a[200010],sum[200010];
int main() {
	t=read();
	while(t--) {
		n=read();
		for(int i=1;i<=n;i++) {
			a[i]=read();
			sum[i]=sum[i-1]+a[i];
		}
		int l=1,r=n;
		while(l<r) {
			int mid=(l+r)>>1;
			printf("? %d ",mid-l+1);
			fflush(stdout);
			for(int i=l;i<=mid;i++) {
				printf("%d ",i);
				fflush(stdout);
			}
			putchar('\n');
			fflush(stdout);
			int tmp=read();
			if(tmp!=sum[mid]-sum[l-1]) {
				r=mid;
			}
			else l=mid+1;
		}
		printf("! %d\n",l);
		fflush(stdout);
	}
	return 0;
}