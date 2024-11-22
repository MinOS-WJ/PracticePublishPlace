#include <stdio.h>

int h1(int m) {
    if (m == 0 || m == 1) {
        return 1;
    }
    return m * h1(m - 1);
}

int h2(int n) {
    int sum = 0,i;
    for (i = 1; i <= n; i++) {
        sum += h1(i);
    }
    return sum;
}

int main() {
    int n,i;
    scanf("%d", &n);
    int s = 0;
    for (i = 1; i <= n; i++) {
        s += h2(i);
    }
    printf("s=%d\n", s);
    return 0;
}
