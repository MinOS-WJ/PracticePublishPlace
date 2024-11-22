#include <stdio.h>

long long int greatest_common_divisor;
long long int least_common_multiple;

void gcd(long long int a, long long int b) {
    while (b != 0) {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    greatest_common_divisor = a;
}

void lcm(long long int a, long long int b) {
    least_common_multiple = (a / greatest_common_divisor) * b;
}

int main() {
    long long int num1, num2;
    scanf("%lld %lld", &num1, &num2);
    gcd(num1, num2);
    lcm(num1, num2);
    printf("max=%lld,min=%lld\n", greatest_common_divisor, least_common_multiple);
    return 0;
}
