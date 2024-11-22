#include <stdio.h>

int isprime(int n) {
    int i;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void myprint(int x,int n) {
    if (n%7==0)
    {
        printf("%4d\n",x);
    }else{
        printf("%4d",x);
    }
    
}


int main() {
    int a, b, i,cnt=0;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++) {
        if (i==1)
        {
            continue;
        }else if (isprime(i))
        {
            cnt++;
            myprint(i,cnt);
        }
    }
    return 0;
}
