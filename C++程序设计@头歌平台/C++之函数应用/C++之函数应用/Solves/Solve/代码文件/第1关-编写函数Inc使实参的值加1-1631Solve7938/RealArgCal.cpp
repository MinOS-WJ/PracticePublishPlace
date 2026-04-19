#include <iostream>
#include <fstream>
using namespace std;

int Inc(int &m){
// 请在下面添加Inc函数的实现代码
/******** Program ********/
    m=m+1;
    return m;
/********** End **********/
}
int main()
{
    int a;
    int m = a;
    
    // 从命令行读入一个int型数值
    // 这个数取自测试集的输入    
  	cin >> m;

  	Inc(m);
    cout << m << endl;
}
