//请在此补充类A、类B的定义
#include <iostream> 

class B; // 前向声明类B

class A {
private:
    int n = 0; // 私有成员，初始化为0
public:
    int get() const { return n; } // 获取n的值
    friend void Set(A& a, int t); // 声明全局Set函数为友元
    friend class B; // 声明类B为友元类
};

class B {
public:
    void Set(A& a, int t) {
        a.n = t; // 友元类B的成员函数可以直接访问A的私有成员n
    }
};