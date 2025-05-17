#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // 设置长和宽
    void Set() {
        cin >> length >> width;
    }

    // 获取长
    double GetLength() const {
        return length;
    }

    // 获取宽
    double GetWidth() const {
        return width;
    }

    // 计算面积
    double Area() const {
        return length * width;
    }

    // 计算周长
    double Perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;
    rect.Set();

    cout << "长：" << rect.GetLength() << endl;
    cout << "宽：" << rect.GetWidth() << endl;
    cout << "面积：" << rect.Area() << endl;
    cout << "周长：" << rect.Perimeter() << endl;

    return 0;
}