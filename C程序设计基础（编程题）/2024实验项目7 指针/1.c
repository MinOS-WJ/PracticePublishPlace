#include <stdio.h>
#define N 10
void reverseArray(int* arr, int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int temp = *(arr + left);
        *(arr + left) = *(arr + right);
        *(arr + right) = temp;
        left++;
        right--;
    }
}

int main() {
    int a[N];
	int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    reverseArray(a, N);
    for (i = 0; i < N; i++) {
        printf("%3d", a[i]);
    }
    return 0;
}
