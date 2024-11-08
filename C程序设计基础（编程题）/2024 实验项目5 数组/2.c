#include <stdio.h>

int main() {
	int a[15], i, max, sta1, min, sta2;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	max = a[0];
  	min = a[0];
	for (i = 0; i < 10; i++) {
		if (a[i] >= max) {
			max = a[i];
			sta1 = i + 1;
		}
		if (a[i] <= min) {
			min = a[i];
			sta2 = i + 1;
		}
	}
	printf("max=%3d,sta1=%3d\nmin=%3d,sta2=%3d\n", max, sta1, min, sta2);
	return 0;
}
