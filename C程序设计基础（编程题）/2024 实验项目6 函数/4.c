#include <stdio.h>

long long int gcd(long long int a, long long int b) {
    while (b != 0) {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long int lcm(long long int a, long long int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long int num1, num2;
    scanf("%lld %lld", &num1, &num2);
    long long int greatest_common_divisor = gcd(num1, num2);
    long long int least_common_multiple = lcm(num1, num2);
    printf("max=%lld,min=%lld\n",greatest_common_divisor,least_common_multiple);
    return 0;
}
