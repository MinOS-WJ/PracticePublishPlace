// #include <iostream>
// #include <string>
// #include "shape.h"
// using namespace std;

// int main(){
//    int x, y;
//    float r,h;
//    cin >> x >> y >> r >> h;
//    Cylinder mycylinder( x, y, r, h );

//    /*********begin********/
//    // 调用print输出圆柱体mycylinder的基本信息
  

//    cout << "\n\nDiameter is " ;
//    //输出直径
 


//    cout << "\nArea is " ;
//    // 输出圆柱体mycylinder的表面积
 


//    cout << "\nVolume is ";
//    // 输出圆柱体mycylinder的体积



//    cout << "\nButtom area is ";
//    //输出圆柱体mycylinder的底面积
  


//    cout << "\nCentre is" ;
//    //输出圆柱体mycylinder底的圆心


//  /*********end********/
//     return 0;
// }
#include <iostream>
#include "shape.h"
using namespace std;

int main() {
    int x, y;
    float r, h;
    cin >> x >> y >> r >> h;
    Cylinder mycylinder(x, y, r, h);

    /*********begin********/
    // 调用print输出圆柱体mycylinder的基本信息
    std::cout<<"Center = ";
    mycylinder.print();

    cout << "\n\nDiameter is ";
    //输出直径
    cout << mycylinder.getDiameter();

    cout << "\nArea is ";
    // 输出圆柱体mycylinder的表面积
    cout << mycylinder.getArea();

    cout << "\nVolume is ";
    // 输出圆柱体mycylinder的体积
    cout << mycylinder.getVolume();

    cout << "\nButtom area is ";
    //输出圆柱体mycylinder的底面积
    cout << mycylinder.Circle::getArea();

    cout << "\nCenter is";
    //输出圆柱体mycylinder底的圆心
    mycylinder.Point::print();
    /*********end********/

    return 0;
}

