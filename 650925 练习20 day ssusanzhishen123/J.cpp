#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main() {
	string s;
	int ans[3] = {0};  //���ڴ���� ans[0]Ϊa, ans[1]Ϊb, ans[2]Ϊc
	cin >> s;          //�����ַ���
	for (int i = 0; i < s.length() - 1; i++) { //ÿλ��ʼ�ж�
		if (s[i] == '=') //����ж�Ϊ =
			if (s[i + 1] >= '0' && s[i] + 1 <= '9') //��� = �����Ǹ�����
				ans[int(s[i - 2]) - 97] = int(s[i + 1] - '0'); //ֱ�Ӹ�ֵ ��s[i-2]����ð��ǰ����ĸ��-97����Ϊ'a'=97��
		//int(s[i+1]) �ǵȺź�����ַ�ת��Ϊ��ֵ
			else                                        //����Ⱥź��治�����֣�������ĸ��
				ans[int(s[i - 2]) - 97] = ans[int(s[i + 1]) - 97]; //ans[int(s[i-2])-97]��ð��ǰ������ֵ������ĸ
		//ans[int(s[i+1])-97]�ǵȺź󣨸���ֵ������ĸ
	}
	cout << ans[0] << " " << ans[1] << " " << ans[2];       //������ a,b,c;
	return 0;
}