#include <bits/stdc++.h>  //����ͷ�ļ�

using namespace std;

int main() {
	int ans = 0, cnt = 0, idx = 0;
	for (int i = 1; i <= 7; i++) {   //���ڼ�¼
		int s, f;
		cin >> s >> f;  //��������
		if (s + f > 8) {
			cnt++;          //��������������
			if ((s + f) > ans) {
				ans = s + f;     //ȡ����˵�һ�죬����ͬ��ǰȡ
				idx = i;
			}
		}
	}
	if (cnt == 0) {   //��û�в����˵�����������0
		cout << 0;
		return 0;
	}
	cout << idx;     //��ӡ���
	return 0;
}