#ifndef DATE_CLASS
#define DATE_CLASS

#include<iostream>
using namespace std;
//请在此处补充Date类的声明
// 定义日期类
class Date {
private:
    string str;
    int year;
    int month;
    int day;

public:
    // 默认构造函数
    Date() {
        str = "缺省日期为：";
        year = 1970;
        month = 1;
        day = 1;
    }

    // 普通构造函数
    Date(int y, int m, int d) {
        str = "日期为：";
        year = y;
        month = m;
        day = d;
    }

    // 析构函数
    ~Date() {
        // 可以在这里添加清理代码
    }

    // 输出日期的方法
    void Print() {
        cout << str << year << "-" << month << "-" << day << endl;
    }
};

#endif