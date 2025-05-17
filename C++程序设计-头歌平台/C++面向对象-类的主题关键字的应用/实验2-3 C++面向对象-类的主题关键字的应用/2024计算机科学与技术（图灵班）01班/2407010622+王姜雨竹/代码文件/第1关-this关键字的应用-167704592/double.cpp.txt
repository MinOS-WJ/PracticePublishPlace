#include "double.h"

// 构造函数
Double::Double(double v) {
    this->v = v;
}

// Set方法
void Double::Set(double v) {
    this->v = v;
}

// 复制赋值运算符
Double& Double::operator=(double v) {
    this->v = v;
    return *this; // 返回当前对象的引用，支持链式赋值
}