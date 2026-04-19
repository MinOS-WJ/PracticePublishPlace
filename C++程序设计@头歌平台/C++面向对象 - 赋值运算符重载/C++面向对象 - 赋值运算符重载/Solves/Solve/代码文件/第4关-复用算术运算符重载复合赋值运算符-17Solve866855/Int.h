#ifndef _INT_H_
#define _INT_H_
class Int {
private:
    int value;
public:
    Int(); // 默认构造函数
    Int(int num); // 构造函数
    Int(const Int& other); // 拷贝构造函数
    Int& operator=(const Int& rhs); // 拷贝赋值运算符重载
    Int& operator=(int num); // 以 int 为形参的赋值运算符重载
    Int& operator+=(const Int& rhs); // 算术复合赋值运算符重载
    void setValue(int v);
    int getValue() const; // 修正后的 getValue 函数声明
    ~Int(); // 析构函数
    // 算术运算符声明
    friend Int operator+(const Int& lhs, const Int& rhs);
};
#endif

