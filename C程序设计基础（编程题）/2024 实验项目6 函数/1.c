#include<stdio.h>
#include<math.h>

int main()
{
	int x,n,i,ans=0;
    scanf("%d%d",&x,&n);
    for (i = 1; i <= n; i++)
    {
        ans+=(int)pow(x,i);
    }
    printf("%d",ans);
	return 0;
}
