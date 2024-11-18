#include<iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	int m;
	for (int i = 0; i < n; i++) {
		cin >> m;
		if (m < 1400) {
			cout << "Division 4" << endl;
		}
		else {
			if (m < 1600) {
				cout << "Division 3" << endl;
			}
			else {
				if (m < 1900) {
					cout << "Division 2" << endl;
				}
				else {
					cout << "Division 1" << endl;
				}
			}
		}
	}
}
