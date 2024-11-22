#include <stdio.h>

int fun(int n) {
    if (n < 100 || n > 999) {
        return 0;
    }
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    if (a * a * a + b * b * b + c * c * c == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d",fun(num));
    return 0;
}
