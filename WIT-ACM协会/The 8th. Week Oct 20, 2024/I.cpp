#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
const int maxn=1e6+5;
int heap[maxn],n=0;//最小堆（下标从1开始） 
void downAdjust(int low,int high)//向下调整 
{
	int i=low,j=i*2;
	while(j<=high)
	{
		if(j+1<=high&&heap[j+1]<heap[j])
			j++;
		if(heap[j]<heap[i])
		{
			swap(heap[j],heap[i]);
			i=j;
			j*=2;
		}
		else
			break;
	}
}
void createHeap()//建堆 
{
	for(int i=n/2;i>=1;i--)
		downAdjust(i,n);
}
void deleteTop()//删除堆顶元素 
{
	heap[1]=heap[n--];
	downAdjust(1,n);
}
void upAdjust(int low,int high)//向上调整 
{
	int i=high,j=i/2;
	while(j>=low)
	{
		if(heap[j]>heap[i])
		{
			swap(heap[j],heap[i]);
			i=j;
			j/=2;
		}
		else
			break;
	}
}
void insert(int x)//插入元素 
{
	heap[++n]=x;
	upAdjust(1,n);
}
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a;
		if(a==1)
		{
			cin>>b;
			insert(b);
		}
		if(a==2)
			cout<<heap[1]<<endl;
		if(a==3)
			deleteTop();
	}
	return 0;
}
