#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
using namespace std;

class myString {
private:
    char *data;
    int length;
public:
    myString(const char *s = "");
    myString(const myString &other);
    myString operator+(const myString &rhs);
    myString &operator+=(const myString &rhs);
    myString &operator=(const myString &rhs);
    bool operator>(const myString &rhs);
    bool operator>=(const myString &rhs);
    bool operator==(const myString &rhs);
    bool operator!=(const myString &rhs);
    bool operator<(const myString &rhs);
    bool operator<=(const myString &rhs);
    myString operator()(int start, int end);
    char &operator[](int index);
    ~myString();
    friend ostream &operator<<(ostream &os, const myString &obj);
    friend istream &operator>>(istream &is, myString &obj);
};

#endif