#include <iostream>  
using namespace std;  

int Fact(int n){
// 请在下面添加外部函数的实现代码
/******** Program ********/ 
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;

/********** End **********/ 
}

int main()  
{
    int n;

    // 从命令行读入一个正整数
    // 这个数取自测试集的输入
    cin >> n;

    cout << n << "!=" << Fact(n) << endl;
}
