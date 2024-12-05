#include<stdio.h>

int gcd(int n,int m);
int main(){
    int m,n;
    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);

    int gcd0=gcd(m,n);

    printf("GCD: %d\n",gcd0);
    printf("LCM: %d\n",(m*n)/gcd0);
    return 0;
}

/*Euclidean algorithm*/
int gcd(int n,int m)
{
    return  m == 0 ? n : gcd(m, m % n);
}
