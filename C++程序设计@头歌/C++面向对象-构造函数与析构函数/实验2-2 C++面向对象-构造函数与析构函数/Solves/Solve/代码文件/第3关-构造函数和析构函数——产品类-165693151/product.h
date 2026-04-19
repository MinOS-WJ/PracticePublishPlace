#pragma

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string id;
    string name;
    double price;
    int validity;

public:
    // 默认构造函数
    Product() {
        id = "000000";
        name = "未知";
        price = 0.0;
        validity = 0;
        cout << "生产产品" << endl;
    }

    // 带参数的构造函数
    Product(string id, string name, double price, int validity) {
        this->id = id;
        this->name = name;
        this->price = price;
        this->validity = validity;
        cout << "生产产品" << endl;
    }

    // 析构函数
    ~Product() {
        cout << "销毁产品：" << name << endl;
    }

    // 输出产品信息的方法
    void Print() {
        cout << "编号：" << id << endl;
        cout << "产品名称：" << name << endl;
        cout << "价格：" << price << "元" << endl;
        cout << "有效期：" << validity << "个月" << endl;
    }
};

