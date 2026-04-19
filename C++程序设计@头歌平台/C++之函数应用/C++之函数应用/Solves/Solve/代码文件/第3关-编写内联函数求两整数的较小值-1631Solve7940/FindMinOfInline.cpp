#include <iostream>  
using namespace std;  

inline float Min(float x,float y){
// 请在下面添加内联函数的实现代码
/******** Program ********/  
    return x<y?x:y;

/********** End **********/ 
}
int main()
{
    float a, b, c;
    
    // 从命令行读入两个float型数值
    // 这两个数取自测试集的输入
    cin >> a >> b;

    c = Min(a,b);    
    cout << "Min(" << a << "," << b << ")=" << c << endl;
}
