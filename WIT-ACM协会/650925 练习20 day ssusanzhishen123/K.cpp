#include <stdio.h>
#include <string.h>

int main() {
	char a[300];
	int n, i;
	scanf("%d", &n);   //�����ƶ���
	scanf("%s", a);    //��������
	for (i = 0; i < strlen(a); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {    //ע������Ƚϵ���ASCII�������ֵĴ�С
			a[i] = ((a[i] - 65 + n) % 26) + 65;       //ASCII��ر������������ASCII����ձ�
		} else { //Сд
			a[i] = ((a[i] - 97 + n) % 26) + 97;       //�������ܵı����Ƕ�Ӧ����ӣ�����һ������
		}
	}
	puts(a);   //��ӡ��ȷ���
	return 0;
}