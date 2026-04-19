#include <bits/stdc++.h>
void solve() {
    std::string s;
    std::cin >> s;
    std::string ss(s);
    reverse(ss.begin(),ss.end());
    std::cout << ss<<"\n";
    if(ss==s){
        std::cout << "是回文";
    }
    else{
        std::cout << "不是回文";
    }
}
int main() {
    solve();
    return 0;
}