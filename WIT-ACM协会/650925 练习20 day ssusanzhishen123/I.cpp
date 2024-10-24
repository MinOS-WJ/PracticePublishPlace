#include <stdio.h>

int main() {
	int n, k, cnt = 0, j = 0;
	scanf("%d", &n);    //传入参数，获取阵列大小

	for (int i = 1; i <= n * n; ) {
		scanf("%d", &k);    //传入压缩过的数据
		j++;      //累加对0/1变化次数进行计数
		while (k--) {
			if (cnt == n) {     //换行处理
				printf("\n");
				cnt = 0;
			}
			printf((j % 2) ? "0" : "1");    //通过判断当前的“j”的奇偶来判断0/1的输出
			cnt++;    //行数累加
			i++;   //形成完整有限的循环
		}
	}

	printf("\n");
	return 0;
}
