#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int>p;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		if(a==1){
			int x;
			scanf("%d",&x);
			p.push(x);
		}
		else if(a==2){
			if(p.empty()==true){
				printf("ERR_CANNOT_POP\n");
			}
			else{
				p.pop();
			}
		}
		else if(a==3){
				if(p.empty()==true){
					printf("ERR_CANNOT_QUERY\n");
				}
				else{
				
				printf("%d\n",p.front());
				}
				}
		else{
			printf("%d\n",p.size());
				}
			}
	return 0;
}