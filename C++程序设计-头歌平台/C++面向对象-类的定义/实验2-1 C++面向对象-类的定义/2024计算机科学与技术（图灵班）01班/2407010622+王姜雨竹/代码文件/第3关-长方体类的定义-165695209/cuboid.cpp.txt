#include "cuboid.h"

// 将长、宽、高均设置为1.0
void Cuboid::Set() {
    length = 1.0;
    width = 1.0;
    height = 1.0;
}

// 重载的 Set 函数，设置长、宽、高
void Cuboid::Set(double l, double w, double h) {
    length = l;
    width = w;
    height = h;
}

// 计算体积
double Cuboid::Volume() const {
    return length * width * height;
}

// 计算表面积
double Cuboid::SurfaceArea() const {
    return 2 * (length * width + length * height + width * height);
}

// 判断是否为立方体
bool Cuboid::isCube() const {
    return (length == width) && (width == height);
}

// 输出长方体信息
void Cuboid::Print() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "长：" << length << "-宽：" << width << "-高：" << height;
    if (isCube()) {
        std::cout << "，是立方体";
    } else {
        std::cout << "，不是立方体";
    }
    std::cout << std::endl;
    std::cout << "体积：" << Volume() << "-表面积：" << SurfaceArea() << std::endl;
}