#ifndef _INT_H_  // 这是define guard
#define _INT_H_  // 在C和C++中，头文件都应该有这玩意

class Int {
private: // 这是访问控制——私有的
    int value; // 这是数据成员，我们称Int是基本类型int的包装类，就是因为Int里面只有一个int类型的数据成员

public: // 这是公有的
    // 请在以下空白书写默认构造函数，即不带参数的构造函数
    /********** Begin **********/
    Int() : value(0) {}  // 使用成员列表初始化
    /********** End **********/

    // 请不要改动以下成员函数
    int getValue() const { return value; }
};

#endif

