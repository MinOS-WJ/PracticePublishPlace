#include "usr.h"
#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    Array<int> a(n);
    a.input();
    cout << a.getMax() << endl;

    cin >> n;
    Array<double> b(n);
    b.input();
    cout << b.getMax() << endl;

    cin >> n;
    Array<Student> c(n);
    c.input();
    cout << c.getMax() << endl;

    return 0;
}