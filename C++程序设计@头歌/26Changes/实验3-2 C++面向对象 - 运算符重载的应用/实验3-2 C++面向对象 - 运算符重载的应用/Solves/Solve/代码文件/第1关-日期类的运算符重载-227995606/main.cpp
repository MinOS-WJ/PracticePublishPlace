#include "date.h"
#include <iostream>
using namespace std;

int main() {
    Date d1, d2;
    cin >> d1 >> d2;

    d1 += 2;
    cout << d1 << endl;

    d2 -= 3;
    cout << d2 << endl;

    ++d1;
    cout << d1 << endl;

    d2++;
    cout << d2 << endl;

    // 不修改 d1、d2，直接按大小输出差值
    if (d1 == d2) {
        cout << 0 << endl;
    } else if (d1 < d2) {
        cout << (d2 - d1) << endl;
    } else {
        cout << (d1 - d2) << endl;
    }

    Date d3 = --d1;
    cout << d3 << endl;

    Date d4 = d2--;
    cout << d4 << endl;

    if (d3 == d4) {
        cout << 0 << endl;
    } else if (d3 < d4) {
        cout << (d4 - d3) << endl;
    } else {
        cout << (d3 - d4) << endl;
    }

    return 0;
}