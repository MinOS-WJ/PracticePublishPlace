#include "book.h"
#include <iostream>

// 默认构造函数实现
Book::Book() : name(""), stock(0) {}

// 带参数的构造函数实现
Book::Book(const std::string& name, int stock) : name(name), stock(stock) {}

// 获取书名
std::string Book::getName() const {
    return name;
}

// 获取库存
int Book::getStock() const {
    return stock;
}

// 售出书籍
void Book::sell(int amount) {
    if (amount > 0 && amount <= stock) {
        stock -= amount;
    } else {
        std::cout << "错误: 售出数量不能为负或超过库存!" << std::endl;
    }
}

// 入库书籍
void Book::restock(int amount) {
    if (amount > 0) {
        stock += amount;
    } else {
        std::cout << "错误: 入库数量不能为负!" << std::endl;
    }
}