#include "part.h"
#include <iostream>

Part::Part(int x) : i(x) {
    std::cout << "in Part()\n";
}

Part::~Part() {
    std::cout << "in ~Part()\n";
}

Whole::Whole(int x) : p(x) {
    std::cout << "in Whole()\n";
}

Whole::~Whole() {
    std::cout << "in ~Whole()\n";
}