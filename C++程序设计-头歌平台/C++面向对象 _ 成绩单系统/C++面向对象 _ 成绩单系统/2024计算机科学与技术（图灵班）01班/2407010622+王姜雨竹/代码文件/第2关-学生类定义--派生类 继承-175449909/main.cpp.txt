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
protected:  // 改为protected，使得子类可以访问
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
    }
};

// Student 类定义，继承 Person
class Student : public Person {
private:
    int reg_Num;
    Date reg_day;

public:
    // 默认构造方法
    Student() : reg_Num(0), reg_day(1999, 9, 9) {}

    // 构造方法1：接收已有Person信息和reg数据
    Student(const Person& p, int reg_Num, const Date& reg_day)
        : Person(p), reg_Num(reg_Num), reg_day(reg_day) {}

    // 构造方法2：接收所有参数
    Student(string name, string num, const Date& birthday, int reg_Num, const Date& reg_day)
        : Person(name, num, birthday), reg_Num(reg_Num), reg_day(reg_day) {}

    // 打印信息（重写父类方法）
    void printInfo() const {
        Person::printInfo();  // 调用父类的打印方法
        cout << "reg_num:" << reg_Num << "reg_day:";
        reg_day.printDate();
        cout << endl;
    }
};

// 测试代码
int main() {
    // 测试默认构造
    Student s1;
    s1.printInfo();

    // 测试带参数的构造
    Person p("Tom", "110105200001010001", 2000, 12, 11);
    Student s2(p, 18070001, Date(2018, 9, 1));
    s2.printInfo();

    // 测试直接构造
    Student s3("Jerry", "110105200001010001", Date(2001, 10, 1), 18070002, Date(2018, 9, 10));
    s3.printInfo();

    return 0;
}