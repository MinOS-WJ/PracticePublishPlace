#include "rectangle.h"

int main() {
    Rectangle rect;
    rect.Set();

    std::cout << "长：" << rect.GetLength() << std::endl;
    std::cout << "宽：" << rect.GetWidth() << std::endl;
    std::cout << "面积：" << rect.Area() << std::endl;
    std::cout << "周长：" << rect.Perimeter() << std::endl;

    return 0;
}