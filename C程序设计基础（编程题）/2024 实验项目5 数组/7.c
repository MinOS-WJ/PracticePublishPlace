#include <stdio.h>
int bifind(int n, int *s);

int main() {
	int s[10] = {8, 10, 23, 37, 41, 55, 68, 72, 89, 95}, n;
	scanf("%d", &n);
	if (bifind(n, s) != -1) {
		printf("sta=%3d\n", bifind(n, s));
	} else {
		printf("No such number!\n");
	}
	return 0;
}

int bifind(int n, int *s) {
	int left = 0, right = 9, mid = 4;
	while (left != (right - 1)) {
		if (s[mid] == n) {
			return mid + 1;
		} else if (s[mid] < n) {
			left = mid;
		} else {
			right = mid;
		}
		mid = (left + right) / 2;
	}
	return -1;
}
