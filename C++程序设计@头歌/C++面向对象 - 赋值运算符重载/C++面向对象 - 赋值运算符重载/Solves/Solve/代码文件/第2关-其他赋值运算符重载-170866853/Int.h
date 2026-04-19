/********** BEGIN **********/
#ifndef INT_H
#define INT_H
class Int {
private:
    int value;
public:
    Int(); // 默认构造函数
    Int(const Int& other); // 拷贝构造函数
    Int& operator=(const Int& other); // 原来的拷贝赋值运算符重载
    Int& operator=(int num); // 新增以 int 为形参的赋值运算符重载
    void setValue(int v);
    int getValue() const;
    ~Int(); // 析构函数
};
#endif




/********** END ***********/
