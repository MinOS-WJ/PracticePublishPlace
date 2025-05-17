#ifndef _INT_H_  // 这是define guard
#define _INT_H_  // 在C和C++中，头文件都应该有这玩意

class Int {
private: // 这是访问控制——私有的
    int value; // 这是数据成员，我们称Int是基本类型int的包装类，就是因为Int里面只有一个int类型的数据成员

public: // 这是公有的
    // 提供三个构造函数
    /********** Begin **********/
    // 默认构造函数
    Int() : value(0) {}  // 使用成员列表初始化，将 value 设置为 0

    // 接受 int 参数的构造函数
    Int(int v) : value(v) {}  // 使用成员列表初始化，将 value 设置为参数 v 的值

    // 拷贝构造函数
    Int(const Int& obj) : value(obj.value) {}  // 使用成员列表初始化，将 value 设置为 obj.value
    /********** End **********/

    // 请不要改动以下成员函数
    int getValue() const { return value; }
};

#endif

