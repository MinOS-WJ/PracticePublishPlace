#define USE_MATH_DEFINE
#include <cmath>
class Shape {
    public:
    Shape()=default;
    virtual ~Shape(){};
    virtual double  area()const=0;
   virtual void print()const =0;
   };

class Square:public Shape{
    private:
    double len;
    public:
   Square(double l=1.0):len(l){}
    double area()const override{
        return len*len;
    }
    void print()const override{
std::cout<<"正方形的面积是"<<area()<<"\n";
    }

};
class Circle:public Shape{
    private:
    double radius;
    public:
    Circle(double r=1.0):radius(r){ }
    double area()const override{
        return 3.14*radius*radius;
    }
    void print()const override{
std::cout<<"圆形的面积是"<<std::fixed<<std::setprecision(2)<<area()<<"\n";
    }
};

class Triangle:public Shape{

    private:
    double a,b,c;
    public:
    Triangle(double a=3,double b=4,double c=5):a(a),b(b),c(c){}
    double area()const override{
        double p=1.0*(a+b+c)/2;
            return std::sqrt(p*(p-a)*(p-b)*(p-c));
    }
void print()const override{
            double areas=area();
        std::cout<<"三角形的面积是"<<std::fixed<<std::setprecision(2)<<areas<<"\n";
    }
};
void shape_sort(Shape*shapes[],int size){
     double l1,r1,a1,b1,c1;
     std::cin>>l1>>r1>>a1>>b1>>c1;
     shapes[0]=new Square(l1);
     shapes[1]=new Circle(r1);
     shapes[2]=new Triangle(a1,b1,c1);
    std::sort(shapes,shapes+size,[](Shape*a,Shape *b){return a->area()<b->area();});
}