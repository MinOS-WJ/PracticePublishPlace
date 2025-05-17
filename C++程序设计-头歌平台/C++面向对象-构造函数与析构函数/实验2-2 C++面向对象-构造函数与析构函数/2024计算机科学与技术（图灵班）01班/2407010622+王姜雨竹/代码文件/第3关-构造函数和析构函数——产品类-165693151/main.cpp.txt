#include <iostream>
#include <string>
#include "product.h"
using namespace std;

int main() {
    // 创建默认产品对象
    Product p1;
    p1.Print();

    // 创建自定义产品对象
    string id, name;
    double price;
    int validity;
    cin >> id >> name >> price >> validity;
    Product p2(id, name, price, validity);
    p2.Print();

    return 0;
}