#include "rectangle.h"

void Rectangle::Set() {
    std::cin >> length >> width;
}

double Rectangle::GetLength() const {
    return length;
}

double Rectangle::GetWidth() const {
    return width;
}

double Rectangle::Area() const {
    return length * width;
}

double Rectangle::Perimeter() const {
    return 2 * (length + width);
}