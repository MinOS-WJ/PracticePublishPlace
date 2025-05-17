//本关卡对应文件夹为step6。
//完成该头文件，要求在类外实现成员函数的定义
/********* Begin *********/


#include <string>
#include <iostream>
using namespace std;

class Student {
private:
    int SID;
    string Name;

public:
    // 无参构造函数
    Student() : SID(0), Name("王小明") {}

    // 带两个参数的构造函数
    Student(int sid, string name) : SID(sid), Name(name) {}

    // 析构函数
    ~Student() {
        cout << SID << " " << Name << " 退出程序" << endl;
    }
};



/********* End *********/
