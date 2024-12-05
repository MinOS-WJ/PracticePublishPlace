#include<stdio.h>

int isPrime(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(isPrime(n))
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}

int isPrime(int n)
{
    if(n==1)
    {
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}