#include<iostream>
using namespace std;
int n,sum;
int main()
{
	cin>>n;
	for(int k=1;k<=n;k++)
		sum+=n/k;
	cout<<sum<<endl;
	return 0;
}