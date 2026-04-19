#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "the string", s2, s3;
    getline(cin,s2);
    s3 = s1 + " " + s2;
    cout << s3 << endl;

   
    if (s1 <= s2) {
        if (s1 != s2) cout << "s1<s2" << endl;
        else cout << "s1==s2" << endl;
    } else {
        cout << "s1>s2" << endl;
    }

    
    if (s2 > s3) cout << "s2>s3" << endl;
    else cout << "s2<=s3" << endl;

    string s4 = s2, s5;
    cout << s4 << endl;

   
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        cout << s3[i];
    }
    s5 = s3.substr(m, n - m + 1);
    cout << "\n" << s5 << endl;

   
    if (s4 >= s5) {
        if (s4 == s5) cout << "s4==s5" << endl;
        else cout << "s4>s5" << endl;
    } else {
        cout << "s4<s5" << endl;
    }

 
    if (s3 < s5) cout << "s3<s5" << endl;
    else cout << "s3>=s5" << endl;

    return 0;
}