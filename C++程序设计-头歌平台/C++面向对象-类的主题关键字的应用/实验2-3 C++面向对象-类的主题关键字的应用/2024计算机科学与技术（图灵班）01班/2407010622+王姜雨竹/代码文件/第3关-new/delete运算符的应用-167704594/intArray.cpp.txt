#include "intArray.h"
#include <iostream>
using namespace std;

// 默认构造函数
intArray::intArray() : data(nullptr), length(0) {
    // 初始化为空数组
}

// 深复制构造函数
intArray::intArray(const intArray& other) {
    length = other.length;
    if (other.data == nullptr) {
        data = nullptr;
    } else {
        data = new int[length];
        for (int i = 0; i < length; i++) {
            data[i] = other.data[i];
        }
    }
}

// 析构函数
intArray::~intArray() {
    delete[] data;
    data = nullptr;
}

// 赋值运算符重载
intArray& intArray::operator=(const intArray& other) {
    if (this == &other) {
        return *this; // 防止自赋值
    }

    delete[] data; // 释放旧内存

    length = other.length;
    if (other.data == nullptr) {
        data = nullptr;
    } else {
        data = new int[length];
        for (int i = 0; i < length; i++) {
            data[i] = other.data[i];
        }
    }

    return *this;
}

// 输入函数
void intArray::Input() {
    cin >> length;
    if (length <= 0) {
        data = nullptr;
        return;
    }

    data = new int[length];
    for (int i = 0; i < length; i++) {
        cin >> data[i];
    }
}

// 输出函数
void intArray::Output() const {
    if (data == nullptr) {
        cout << "Array: (空)" << endl;
        return;
    }

    cout << "Array:";
    for (int i = 0; i < length; i++) {
        cout << data[i];
        if(i != length-1)cout<<' ';
    }
    cout << endl;
}

// 动态调整数组长度
void intArray::Resize(int newLength) {
    if (newLength <= 0) {
        delete[] data;
        data = nullptr;
        length = 0;
        return;
    }

    if (newLength == length) {
        return; // 长度不变，无需调整
    }

    int* newData = new int[newLength];
    int copyLength = (newLength < length) ? newLength : length;

    for (int i = 0; i < copyLength; i++) {
        newData[i] = data[i];
    }

    // 如果新长度大于原长度，剩余部分初始化为0
    for (int i = copyLength; i < newLength; i++) {
        newData[i] = 0;
    }

    delete[] data;
    data = newData;
    length = newLength;
}