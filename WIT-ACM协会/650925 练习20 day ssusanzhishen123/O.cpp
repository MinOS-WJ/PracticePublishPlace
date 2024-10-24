#include <stdio.h>
int n, a[1000001];

void swap(int *a, int *b) { //����ָ�뽻��������
	int k;
	k = *a;
	*a = *b;
	*b = k;
}

void quick(int begin, int end) {          //���м����Ϊ��׼������������ָ�뷨
	int mid = a[(begin + end) / 2]; //ȡÿ��Ҫ��������м��Ǹ���
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
		quick(begin, right); //�����̽������û��������ˣ������ֻ���Ҫ��������
	if (left < end)
		quick(left, end); //ͬ�Ϸ�֮
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