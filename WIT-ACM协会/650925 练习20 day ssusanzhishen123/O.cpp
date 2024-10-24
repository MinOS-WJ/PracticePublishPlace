#include <stdio.h>
int n, a[1000001];

void swap(int *a, int *b) { //利用指针交换两个数
	int k;
	k = *a;
	*a = *b;
	*b = k;
}

void quick(int begin, int end) {          //以中间的数为基准快速排序，左右指针法
	int mid = a[(begin + end) / 2]; //取每次要排序的最中间那个数
	int left = begin, right = end;
	do {
		while (a[left] < mid)
			left++;
		while (a[right] > mid)
			right--;
		if (left <= right) {
			swap(&a[left], &a[right]);
			left++;
			right--;
		}
	} while (left <= right);
	if (begin < right)
		quick(begin, right); //如果右探测器还没到达最左端，即部分还需要继续排序
	if (left < end)
		quick(left, end); //同上反之
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	quick(0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}