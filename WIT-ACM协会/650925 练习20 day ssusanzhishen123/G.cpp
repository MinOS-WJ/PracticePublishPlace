#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;    //����ԭʼ����
	cin >> n;

	for (int i = 2; i <= n; i++)   //ѭ����ٳ���1�������С�����������ó���������Ϊ��С�����ĵ���
		if (n % i == 0) {
			cout << n / i;       //��ӡ��ȷ���
			break;
		}

	return 0;
}