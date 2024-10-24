/*
#include <iostream>
using namespace std;
// �������ڼ���쳲��������еĵ�n��
long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    long long prev = 0, curr = 1;
    for (int i = 2; i <= n; i++) {
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
// �������ڼ���쳲���������ǰn��ĺ�
long long fibonacciSum(int n) {
    long long sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += fibonacci(i);
    }
    return sum;
}
int main() {
    int n;
    cout << "������n��ֵ��";
    cin >> n;
    cout << "쳲���������ǰ" << n << "��ĺ�Ϊ��" << fibonacciSum(n) << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

long long fibonacciSum(int n) {
	if (n == 1) {
		return n;
	}
	long long prev = 0, curr = 1, sum = 1;
	for (int i = 2; i <= n; i++) {
		long long next = prev + curr;
		prev = curr;
		curr = next;
		sum += curr;
	}
	return sum;
}



int main() {
	int n;
	cout << "������n��ֵ��";
	cin >> n;
	if (n > 128 || n <= 0) {
		printf("ERROR!\n");
		return 1;
	}
	cout << "쳲���������ǰ" << n << "��ĺ�Ϊ��" << fibonacciSum(n) << endl;
	return 0;
}

