/********** BEGIN **********/
#ifndef _INT_H_
#define _INT_H_
#include <iostream>

// Int 类的声明
class Int {
private:
    int value; // 存储整数值

public:
    // 构造函数
    Int(int val = 0) : value(val) {}

    // 获取 Int 对象的值
    int getValue() const {
        return value;
    }

    // 成员函数算术运算符重载
    Int operator + (Int const& rhs);
    Int operator - (Int const& rhs);
    Int operator * (Int const& rhs);
    Int operator / (Int const& rhs);
    Int operator % (Int const& rhs);
};

#endif // _INT_H_




/********** END ***********/
