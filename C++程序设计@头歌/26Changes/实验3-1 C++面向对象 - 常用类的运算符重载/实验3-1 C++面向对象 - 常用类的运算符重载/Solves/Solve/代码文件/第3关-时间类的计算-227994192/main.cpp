#include "time.h"
#include <iostream>
using namespace std;

int main() {
    int h, m, s, i;

    // 测试 1：Time + Time
    cin >> h >> m >> s;          Time t1(h, m, s);
    cin >> h >> m >> s;          Time t2(h, m, s);
    cout << "t1+t2=" << t1 + t2 << endl;

    // 测试 2：Time - int
    cin >> h >> m >> s >> i;
    t1 = Time(h, m, s);
    cout << "t1-i=" << t1 - i << endl;

    // 测试 3：int + Time
    cin >> i >> h >> m >> s;
    t1 = Time(h, m, s);
    cout << "i+t1=" << i + t1 << endl;

    return 0;
}