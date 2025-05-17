#ifndef _INT_H_  // 这是define guard
#define _INT_H_  // 在C和C++中，头文件都应该有这玩意

class Int {
private: // 这是访问控制——私有的
    int value; // 这是数据成员，我们称Int是基本类型int的包装类，就是因为Int里面只有一个int类型的数据成员

public: // 这是公有的
    // 功能构造函数，以一个整型作为参数
    /********** Begin **********/
    Int(int v) : value(v) {}  // 使用成员列表初始化
    /********** End **********/

    // 请不要改动以下成员函数
    int getValue() const { return value; }
};

#endif

