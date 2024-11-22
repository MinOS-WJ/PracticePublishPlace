#include <stdio.h>

int main() {
	int grade;
	scanf("%d", &grade);
	if (grade > 100 || grade < 0) {
		printf("这不是一个正确的成绩\n");
		return 0;
	} else {

		switch (grade / 10) {
			case 10:
			case 9:
				printf("A");
				break;
			case 8:
				printf("B");
				break;
			case 7:
				printf("C");
				break;
			case 6:
				printf("D");
				break;
			default:
				printf("E\n");
		}
		return 0;
	}
}



