#include<stdio.h>
#include<math.h>
#define lint long long

lint powlib[10][10];

void preparepowlib(){
    for(int i=1;i<=9;i++){
        for(int j=0;j<=9;j++){
            powlib[i][j]=pow(i,j);
        }
    }
}

lint mpow(int a,int b){
    return powlib[a][b];
}

int main(){
    preparepowlib();
    lint n;
    lint p[10]={0,1,10,100,1000,10000,100000,1000000,10000000,100000000};
    scanf("%lld",&n);
    for (lint i = p[n]; i < p[n+1]; i++)
    {
        lint sum=0;
        for(int j=1;j<=n;j++){
            sum+=mpow(((i/p[j])%10),n);
        }
        if (sum==i)
        {
            printf("%lld\n",i);
        }
    }
    return 0;
}