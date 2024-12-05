#include<stdio.h>

long long int factorial(int);

int main(){
    int n;
    long long int ans=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    ans=factorial(n);
    printf("Factorial of %d is %lld",n,ans);
    return 0;
}

long long int factorial(int n){
    return n==0?1:n*factorial(n-1);
}