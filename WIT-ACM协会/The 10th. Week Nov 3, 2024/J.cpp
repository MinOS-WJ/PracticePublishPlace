#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", n % 10 + n / 10);
	}
	return 0;
}