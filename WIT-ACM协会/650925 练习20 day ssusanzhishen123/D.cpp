#include <bits/stdc++.h>

using namespace std;

int a[15];   //��������

int main () {
	int b, num = 0;
	for (int i = 1; i <= 10; i++)   //ѭ��¼������
		cin >> a[i];

	cin >> b;

	for (int i = 1; i <= 10; i++)    //ѭ���ж��Ƿ����ժ��ƻ��
		if (a[i] <= b + 30)
			num++;

	cout << num << endl; //��ӡ���
}
