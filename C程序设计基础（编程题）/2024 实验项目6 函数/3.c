#include <stdio.h>

long long int Fibonacci(long long int n) {
    if (n==1||n==2) {
        return 1;
    }else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}



void myprint(long long int x,int n) {
    if (n%5==0)
    {
        printf("%6lld\n",x);
    }else{
        printf("%6lld",x);
    }
}


int main() {
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        myprint(Fibonacci(i),i);
    }
    return 0;
}
