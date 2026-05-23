#include "usr.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string temp(s);
    myReverse(temp.begin(), temp.end());
    cout << temp << endl;
    if (temp == s) cout << "是回文" << endl;
    else cout << "不是回文" << endl;
    return 0;
}