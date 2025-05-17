#pragma once
#include <iostream>
using namespace std;

class object {
private:
    const int a;
    const int c = 1;
    int b;

public:
    // 构造函数
    object(int a_val, int b_val);

    // Print方法
    void Print() const;

    // GetA方法
    int GetA() const;

    // GetB方法
    int& GetB(); // 返回对b的引用

    // GetC方法
    int GetC() const;

    // 重载++运算符
    object& operator++();
};