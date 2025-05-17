#include <iostream>
#include <string>
#include "book.h"

int main() {
    // 创建3本书籍对象的数组
    Book books[3];
    
    // 初始化书籍信息
    for (int i = 0; i < 3; ++i) {
        std::string name;
        int stock;
        std::cin >> name >> stock;
        books[i] = Book(name, stock);
    }
    
    // 处理操作
    for (int i = 0; i < 3; ++i) {
        std::string name;
        int code, amount;
        std::cin >> name >> code >> amount;
        
        // 查找对应的书籍
        for (int j = 0; j < 3; ++j) {
            if (books[j].getName() == name) {
                // 根据操作码执行相应操作
                if (code == 1) {
                    books[j].sell(amount);
                } else if (code == 2) {
                    books[j].restock(amount);
                } else {
                    std::cout << "无效的操作码!" << std::endl;
                }
                break;
            }
        }
    }
    
    // 显示所有书籍的库存
    for (int i = 0; i < 3; ++i) {
        std::cout << books[i].getName() << " " << books[i].getStock() << std::endl;
    }
    
    return 0;
}