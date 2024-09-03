#include <stdio.h>
#include <string.h>

int main() {
	char a[300];
	int n, i;
	scanf("%d", &n);   //传入移动量
	scanf("%s", a);    //传入密文
	for (i = 0; i < strlen(a); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {    //注意这里比较的是ASCII编码数字的大小
			a[i] = ((a[i] - 65 + n) % 26) + 65;       //ASCII相关编码问题请参阅ASCII码对照表
		} else { //小写
			a[i] = ((a[i] - 97 + n) % 26) + 97;       //凯撒加密的本质是对应编码加（减）一个整数
		}
	}
	puts(a);   //打印正确结果
	return 0;
}