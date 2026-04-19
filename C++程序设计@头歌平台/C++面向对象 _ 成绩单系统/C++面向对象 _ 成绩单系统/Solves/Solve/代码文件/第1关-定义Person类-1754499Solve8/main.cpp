/**********  End **********/
#include <iostream>
#include <string>
using namespace std;

// Date 类定义
class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int y = 1999, int m = 9, int d = 9) : year(y), month(m), day(d) {}

    void printDate() const {
        cout << year << "." << month << "." << day;
    }
};

// Person 类定义
class Person {
private:
    string name;
    string num;
    Date birthday;

public:
    // 默认构造方法
    Person() : name("null"), num("null"), birthday(1999, 9, 9) {}

    // 构造方法1：接收Date对象
    Person(string name, string num, Date birthday)
        : name(name), num(num), birthday(birthday) {}

    // 构造方法2：接收年月日
    Person(string name, string num, int year, int month, int day)
        : name(name), num(num), birthday(year, month, day) {}

    // 打印信息
    void printInfo() const {
        cout << "name=" << name << " number=" << num << " birthday:";
        birthday.printDate();
        cout << endl;
    }
};

// 测试类
int main() {
    // 测试默认构造
    Person p0;
    p0.printInfo();

    // 读取输入
    int y1, m1, d1, y2, m2, d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;

    // 测试构造方法1（不补零）
    Date date1(y1, m1, d1);
    Person p1("小明", "110105" + to_string(y1) + to_string(m1) + to_string(d1) + "1001", date1);
    p1.printInfo();

    // 测试构造方法2（不补零）
    Person p2("大师兄", "110105" + to_string(y2) + to_string(m2) + to_string(d2) + "1002", y2, m2, d2);
    p2.printInfo();

    return 0;
}







/**********  End **********/