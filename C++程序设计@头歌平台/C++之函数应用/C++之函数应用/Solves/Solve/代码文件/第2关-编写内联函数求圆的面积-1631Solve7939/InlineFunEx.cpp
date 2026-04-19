#include <iostream>
using namespace std;

inline double CalArea(double r){
// 请在下面添加内联函数的实现代码
/******** Program ********/   
    return 3.14*r*r;


/********** End **********/ 
}

int main()
{
    double radius, area;

    // 从命令行读入一个double型数值
    // 这个数取自测试集的输入
    cin >> radius;

    double r(radius);
    area = CalArea(r);
    cout << area << endl;
}
