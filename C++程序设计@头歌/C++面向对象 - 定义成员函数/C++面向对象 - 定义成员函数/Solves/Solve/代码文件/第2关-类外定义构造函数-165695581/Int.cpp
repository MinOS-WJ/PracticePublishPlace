/********* Begin ********/

#include "Int.h"

// 默认构造函数
Int::Int() {
    value = 0; // 初始化为0
}

// 拷贝构造函数
Int::Int(Int const& other) {
    value = other.value; // 拷贝other的value
}

// 转换构造函数
Int::Int(int v) {
    value = v; // 初始化为传入的整数
}

// 存取函数
int Int::getValue() const {
    return value; // 返回value的值
}


/******** End **********/