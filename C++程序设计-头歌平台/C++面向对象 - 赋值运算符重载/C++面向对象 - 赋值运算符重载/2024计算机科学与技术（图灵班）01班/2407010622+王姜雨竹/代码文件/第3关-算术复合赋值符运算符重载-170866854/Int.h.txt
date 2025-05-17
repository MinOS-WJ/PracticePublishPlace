/********** BEGIN **********/
#ifndef INT_H
#define INT_H
class Int {
private:
    int value;
public:
    Int(); // 默认构造函数
    Int(int num); // 添加以 int 为形参的构造函数
    Int(const Int& other); // 拷贝构造函数
    Int& operator=(const Int& other); // 拷贝赋值运算符重载
    Int& operator=(int num); // 以 int 为形参的赋值运算符重载
    Int& operator+=(const Int& other); // 重载复合赋值符运算符 +=
    void setValue(int v);
    int getValue() const;
    ~Int(); // 析构函数
};
#endif




/********** END ***********/
