#pragma once
#include <iostream>
#include <iomanip>

class Cuboid {
private:
    double length;
    double width;
    double height;

public:
    // 重载的 Set 函数
    void Set();
    void Set(double, double, double);

    // 计算体积
    double Volume() const;

    // 计算表面积
    double SurfaceArea() const;

    // 判断是否为立方体
    bool isCube() const;

    // 输出长方体信息
    void Print() const;
};