#ifndef INTARRAY_H
#define INTARRAY_H

class intArray {
private:
    int* data;  // 指向动态分配的数组
    int length; // 数组长度

public:
    // 默认构造函数
    intArray();

    // 深复制构造函数
    intArray(const intArray& other);

    // 析构函数
    ~intArray();

    // 赋值运算符重载
    intArray& operator=(const intArray& other);

    // 输入函数
    void Input();

    // 输出函数
    void Output() const;

    // 动态调整数组长度
    void Resize(int newLength);
};

#endif // INTARRAY_H