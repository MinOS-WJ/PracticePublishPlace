//本关卡对应文件夹为step5。
/********* Begin ********/

#include "Int.h"

// 实现加法函数
Int add(Int const& lhs, Int const& rhs) {
    int sum = lhs.getValue() + rhs.getValue();
    return Int(sum);
}

// 实现乘法函数
Int mul(Int const& lhs, Int const& rhs) {
    int product = lhs.getValue() * rhs.getValue();
    return Int(product);
}

/********* End **********/