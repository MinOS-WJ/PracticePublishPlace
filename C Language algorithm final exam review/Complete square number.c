#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==(int)sqrt(n)*(int)sqrt(n))
    {
        printf("It is a perfect square number.");
    }
    else
    {
        printf("It is not a perfect square number.");
    }
}