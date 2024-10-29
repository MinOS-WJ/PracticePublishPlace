#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int k, q = 1, s;

int main() {
	scanf("%d", &k);
	while (q < k)
		q *= 2;
	if (q == k)
		return !printf("%d 0", q);
	else
		printf("%d ", q);
	while (k > 0)
		q /= 2, k %= q, s++;
	return !printf("%d", s);
}