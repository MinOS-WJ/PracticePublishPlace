/********* Begin ********/


/**
 * 这是一个包装类(wrapper class)，包装类在C++中有点小小的用处(基本上没用)，在Java中的用处更大一些。
 */
#ifndef _INT_H_  //这是define guard 
#define _INT_H_  //在C和C++中，头文件都应该有这玩意 
class Int{
    
private://这是访问控制——私有的 
    int value; //这是数据成员，我们称Int是基本类型int的包装类，就是因为Int里面只有一个int类型的数据成员 
               
public:    //这是公有的 
    //以下是构造函数的声明 
    
    Int();
    Int(Int const&);
    Int(int);
    
    //以下是取函数的声明
    int getValue()const; 
    
};//记住这里有一个分号 
#endif

/******** End **********/

