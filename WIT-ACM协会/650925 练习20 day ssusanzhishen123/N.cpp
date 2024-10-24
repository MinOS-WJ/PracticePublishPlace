#include <cstdio>

using namespace std;

int main() {
	int a[1001] = {0}, n, i, b, s = 0;     //初始化“a”数组中每个都为0
	scanf("%d", &n);                //获取随机数个数
	for (i = 0; i < n; i++) {          //循环为随机数的出现次数计数
		scanf("%d", &b);
		a[b]++;
	}
	for (i = 1; i < 1001; i++)  //循环逐个判断是否有重复  注：判断次数的这里感觉方法不是很好
		if (a[i] > 0)
			s++;            //去重后重新计数
	printf ("%d\n", s);          //打印新个数
	for (i = 1; i < 1001; i++) {        //循环将出现的随机数打印输出
		if (a[i] > 0)
			printf("%d ", i);
	}
	return 0;
}

//此解法是经典的桶排序算法！！！