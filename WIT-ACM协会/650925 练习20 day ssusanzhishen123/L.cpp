#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstdlib>
#include <algorithm>//�ļ�ͷ������
using namespace std;
long long n;
int a[10000];//�������������

int main() {
	cin >> n; //����n
	int pd = 0; //�ж��Ƿ��������ı���
	for (int i = 2; i < n; i++) {
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				pd = 1;    //������������һ����������������pd����Ϊ1,�˳����forѭ��
				break;
			}
		}
		if (pd == 0)
			a[i] = 1; //���������Ҳ�������1�����������������������±��1
		pd = 0;
	}
	for (int i = 4; i <= n; i += 2) { //��4��ʼ��i+=2����ֱ����������
		for (int j = 2; j < n; j++) { //��С������Ϊ2���ʹ�2��ʼ
			if (a[j] == 1 && a[i - j] == 1) {
				cout << i << '=' << j << '+' << i - j << endl;
				break;
			}//���j���������ҵ�ǰ��-j����������������˳����forѭ��
		}
	}
	return 0;
}