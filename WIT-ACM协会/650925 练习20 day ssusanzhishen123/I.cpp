#include <stdio.h>

int main() {
	int n, k, cnt = 0, j = 0;
	scanf("%d", &n);    //�����������ȡ���д�С

	for (int i = 1; i <= n * n; ) {
		scanf("%d", &k);    //����ѹ����������
		j++;      //�ۼӶ�0/1�仯�������м���
		while (k--) {
			if (cnt == n) {     //���д���
				printf("\n");
				cnt = 0;
			}
			printf((j % 2) ? "0" : "1");    //ͨ���жϵ�ǰ�ġ�j������ż���ж�0/1�����
			cnt++;    //�����ۼ�
			i++;   //�γ��������޵�ѭ��
		}
	}

	printf("\n");
	return 0;
}
