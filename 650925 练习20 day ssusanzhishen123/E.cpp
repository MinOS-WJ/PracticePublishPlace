#include <bits/stdc++.h>

using namespace std;

int main() {
	double sn = 0;
	int k;
	cin >> k;
	for (int i = 1;; i++) {       //ѭ���ۼ�
		sn += (double)1 / i;      //��Ч��: sn = (double) sn + 1 / i; 
		if (k < sn) {     //�ж��Ƿ�Ϊ��ȷ���
			cout << i;   //��ӡ���
			return 0;
		}
	}
	return 0;
}
