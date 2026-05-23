#include "mystring.h"
#include <cstring>

myString::myString(const char *s) {
    if (s == nullptr) s = "";
    length = strlen(s);
    data = new char[length + 1];
    strcpy(data, s);
}

myString::myString(const myString &other) {
    length = other.length;
    data = new char[length + 1];
    strcpy(data, other.data);
}

myString::~myString() {
    delete[] data;
}

myString& myString::operator=(const myString &rhs) {
    if (this != &rhs) {
        delete[] data;
        length = rhs.length;
        data = new char[length + 1];
        strcpy(data, rhs.data);
    }
    return *this;
}

myString& myString::operator+=(const myString &rhs) {
    int newLen = length + rhs.length;
    char *newData = new char[newLen + 1];
    strcpy(newData, data);
    strcat(newData, rhs.data);
    delete[] data;
    data = newData;
    length = newLen;
    return *this;
}

myString myString::operator+(const myString &rhs) {
    myString result(*this);
    result += rhs;
    return result;
}

bool myString::operator>(const myString &rhs)  { return strcmp(data, rhs.data) >  0; }
bool myString::operator>=(const myString &rhs) { return strcmp(data, rhs.data) >= 0; }
bool myString::operator==(const myString &rhs) { return strcmp(data, rhs.data) == 0; }
bool myString::operator!=(const myString &rhs) { return strcmp(data, rhs.data) != 0; }
bool myString::operator<(const myString &rhs)  { return strcmp(data, rhs.data) <  0; }
bool myString::operator<=(const myString &rhs) { return strcmp(data, rhs.data) <= 0; }

myString myString::operator()(int start, int end) {
    if (start < 0) start = 0;
    if (end >= length) end = length - 1;
    if (start > end) return myString("");
    int len = end - start + 1;
    char *buf = new char[len + 1];
    strncpy(buf, data + start, len);
    buf[len] = '\0';
    myString result(buf);
    delete[] buf;
    return result;
}

char& myString::operator[](int index) {
    return data[index];
}

ostream& operator<<(ostream &os, const myString &obj) {
    os << obj.data;
    return os;
}

istream& operator>>(istream &is, myString &obj) {
    char buf[10000];
    is.getline(buf, 10000);
    delete[] obj.data;
    obj.length = strlen(buf);
    obj.data = new char[obj.length + 1];
    strcpy(obj.data, buf);
    return is;
}