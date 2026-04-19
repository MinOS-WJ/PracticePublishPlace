#include <bits/stdc++.h>
void solve(){
    int n,l,r;
    std::cin>>n;
    std::vector<int> a(n);
    for(auto &p:a){
        std::cin>>p;
    }
    std::cin>>l>>r;
    std::sort(a.begin()+l,a.begin()+r+1,[&](auto x,auto y){return x>y;});
    for(int i=l;i<=r;i++){
    std::cout<<a[i]<<" ";
    }

}
int main()
{
    solve();
    return 0;
}