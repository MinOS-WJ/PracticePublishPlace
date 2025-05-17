#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string name;  // 书名
    int stock;         // 库存

public:
    // 默认构造函数
    Book();
    
    // 带参数的构造函数
    Book(const std::string& name, int stock);
    
    // 获取书名
    std::string getName() const;
    
    // 获取库存
    int getStock() const;
    
    // 售出书籍
    void sell(int amount);
    
    // 入库书籍
    void restock(int amount);
};

#endif // BOOK_H