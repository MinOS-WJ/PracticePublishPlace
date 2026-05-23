#ifndef USR_H
#define USR_H
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string id;
    string name;
    int score;

    bool operator<(const Student& other) const;
    friend istream& operator>>(istream& is, Student& s);
    friend ostream& operator<<(ostream& os, const Student& s);
};

template <typename T>
class Array {
private:
    T* data;
    int size;
public:
    Array(int n) : size(n) {
        data = new T[n];
    }
    ~Array() {
        delete[] data;
    }
    void input() {
        for (int i = 0; i < size; i++) cin >> data[i];
    }
    T getMax() const {
        T maxVal = data[0];
        for (int i = 1; i < size; i++) {
            if (maxVal < data[i]) maxVal = data[i];
        }
        return maxVal;
    }
};

#endif