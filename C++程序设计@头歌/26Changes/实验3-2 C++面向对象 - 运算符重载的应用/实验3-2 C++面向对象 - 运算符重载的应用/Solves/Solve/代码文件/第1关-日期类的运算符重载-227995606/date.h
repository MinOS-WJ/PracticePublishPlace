#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date {
private:
    int year, month, day;
    bool isLeap() const;
    int toDays() const;              // 转成总天数
    void fromDays(int totalDays);    // 从总天数还原回 y/m/d
public:
    Date(int y = 1, int m = 1, int d = 1);

    bool operator==(const Date& other) const;
    bool operator<(const Date& other) const;

    Date& operator+=(int days);
    Date& operator-=(int days);

    Date& operator++();          // 前置 ++
    Date  operator++(int);       // 后置 ++
    Date& operator--();          // 前置 --
    Date  operator--(int);       // 后置 --

    friend int operator-(const Date& d1, const Date& d2);
    friend ostream& operator<<(ostream& os, const Date& dt);
    friend istream& operator>>(istream& is, Date& dt);
};

#endif