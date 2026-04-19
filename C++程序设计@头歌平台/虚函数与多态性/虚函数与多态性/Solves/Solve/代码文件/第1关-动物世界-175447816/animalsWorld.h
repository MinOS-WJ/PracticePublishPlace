#pragma once
#include <iostream> 
using namespace std;

class Mammal
{
/********* Begin *********/
public:
//哺乳动物类的定义 
 Mammal()=default;
 virtual void speak()=0;
/********* End *********/
};

/********* Begin *********/
//狗类的定义 
class Dog :public Mammal{
public:
void speak()override{
    std::cout<<"汪汪汪\n";
}
};

//猫类的定义 
class Cat: public Mammal{
void speak()override{
    std::cout<<"喵喵喵\n";
}
};

//MammalSpeak函数的定义 
void MammalSpeak(Mammal&other){
    other.speak();
}
 
/********* End *********/