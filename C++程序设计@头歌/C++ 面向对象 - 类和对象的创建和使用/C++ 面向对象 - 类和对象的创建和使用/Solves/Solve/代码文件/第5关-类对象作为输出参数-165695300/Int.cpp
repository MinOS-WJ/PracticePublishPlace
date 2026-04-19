//本关卡对应文件夹为step6。
/********* Begin ********/

#include "Int.h"

// 实现加法函数
void add(Int const& lhs, Int const& rhs, Int& ret) {
    int sum = lhs.getValue() + rhs.getValue();
    ret.setValue(sum);
}

// 实现乘法函数
void mul(Int const& lhs, Int const& rhs, Int& ret) {
    int product = lhs.getValue() * rhs.getValue();
    ret.setValue(product);
}

/********* End **********/