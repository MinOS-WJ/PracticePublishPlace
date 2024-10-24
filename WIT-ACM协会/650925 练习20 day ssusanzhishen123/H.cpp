#include <stdio.h>

int main() {
	int L, M, i, j, sum = 0;
	int tree[10010];
	int kaishi[102], jieshu[102];
	scanf("%d%d", &L, &M);        //传入数据，注意，根据题意，这里获取的是道路长度和区间数

	for (i = 0; i <= L; i++)       //在整条路上种上“树”，也就是在数组中用0/1表示有树/没有树
		tree[i] = 1;      //赛博种树

	for (i = 0; i < M; i++) {       
		scanf("%d%d", &kaishi[i], &jieshu[i]);    //传入数据，这里采用循环获取多组区间开始和结束坐标参数
	}

	for (i = 0; i < M; i++) {              //循环挖去每个区间的“树”，即把要挖去树的位置坐标由1变成0
		for (j = kaishi[i]; j <= jieshu[i]; j++)
			tree[j] = 0;      //赛博挖树
	}

	for (i = 0; i <= L; i++) {      //循环对道路上剩下的树进行计数
		if (tree[i] == 1)
			sum++;
	}

	printf("%d\n", sum);     //打印正确结果
	return 0;
}