//本关卡对应文件夹为step4。
//完成该头文件
/********* Begin *********/
   

#ifndef _INT_H_
#define _INT_H_
class Int {
private:
    int value;
public:
    Int() : value(0) {}
    Int(Int const& rhs) : value(rhs.value) {}
    Int(int v) : value(v) {}
    int getValue() const { return value; }
};

void output(Int const&);
#endif


/********* End *********/
