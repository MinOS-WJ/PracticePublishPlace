#pragma once
constexpr double PI=3.14159;
class Shape
{
/********* Begin *********/
//图形类的定义 
public:
Shape()=default;
virtual double area()const =0;
virtual ~Shape()=default;
/********* End *********/
};

/********* Begin *********/
//圆类的定义 
class Circle:public Shape{
    private:
    double radius;
    public:
Circle(double r):radius(r){}
 double area()const override{
     return radius*PI*radius;
 }
};

//矩形类的定义 
class Rectangle:public Shape{
    private: double length,width;
    public:
    Rectangle(double l,double w):length(l),width(w){}
    double area()const override{
        return length*width;
    }
    
};

/********* End *********/	