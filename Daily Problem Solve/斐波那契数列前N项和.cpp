/*
#include <iostream>
using namespace std;
// 函数用于计算斐波那契数列的第n项
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
// 函数用于计算斐波那契数列前n项的和
long long fibonacciSum(int n) {
    long long sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += fibonacci(i);
    }
    return sum;
}
int main() {
    int n;
    cout << "请输入n的值：";
    cin >> n;
    cout << "斐波那契数列前" << n << "项的和为：" << fibonacciSum(n) << endl;
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
	cout << "请输入n的值：";
	cin >> n;
	if (n > 128 || n <= 0) {
		printf("ERROR!\n");
		return 1;
	}
	cout << "斐波那契数列前" << n << "项的和为：" << fibonacciSum(n) << endl;
	return 0;
}

