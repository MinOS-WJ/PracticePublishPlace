#include <stdio.h>

int main() {
	while (1) {
		int y;
		scanf("%d", &y);
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
			printf("isR");
		} else {
			printf("notR");
		}
	}
	return 0;
}