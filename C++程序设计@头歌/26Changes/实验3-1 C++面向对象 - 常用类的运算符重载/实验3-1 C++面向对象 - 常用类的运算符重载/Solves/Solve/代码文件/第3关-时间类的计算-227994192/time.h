#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute, second;
    void normalize();                       // 进位/借位/24小时规整
public:
    Time(int h = 0, int m = 0, int s = 0);

    Time operator+(const Time& t) const;    // Time + Time
    Time operator+(int s) const;            // Time + int(秒)
    Time operator-(int s) const;            // Time - int(秒)
    friend Time operator+(int s, const Time& t);                 // int + Time
    friend ostream& operator<<(ostream& os, const Time& t);      // 输出
};

#endif