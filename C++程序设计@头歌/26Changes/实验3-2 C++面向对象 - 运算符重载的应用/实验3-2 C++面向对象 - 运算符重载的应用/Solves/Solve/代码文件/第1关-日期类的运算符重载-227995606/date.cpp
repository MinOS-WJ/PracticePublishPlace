#include "date.h"

// 静态工具函数
static bool isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

static int daysInMonthOf(int y, int m) {
    static const int t[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2 && isLeapYear(y)) return 29;
    return t[m - 1];
}

Date::Date(int y, int m, int d) : year(y), month(m), day(d) {}

bool Date::isLeap() const { return isLeapYear(year); }

int Date::toDays() const {
    int total = 0;
    for (int y = 1; y < year; y++)
        total += isLeapYear(y) ? 366 : 365;
    for (int m = 1; m < month; m++)
        total += daysInMonthOf(year, m);
    total += day;
    return total;
}

void Date::fromDays(int totalDays) {
    int y = 1;
    while (true) {
        int yLen = isLeapYear(y) ? 366 : 365;
        if (totalDays <= yLen) break;
        totalDays -= yLen;
        y++;
    }
    year = y;

    int m = 1;
    while (m <= 12) {
        int mLen = daysInMonthOf(y, m);
        if (totalDays <= mLen) break;
        totalDays -= mLen;
        m++;
    }
    month = m;
    day   = totalDays;
}

bool Date::operator==(const Date& o) const {
    return year == o.year && month == o.month && day == o.day;
}

bool Date::operator<(const Date& o) const {
    if (year  != o.year)  return year  < o.year;
    if (month != o.month) return month < o.month;
    return day < o.day;
}

Date& Date::operator+=(int days) {
    fromDays(toDays() + days);
    return *this;
}

Date& Date::operator-=(int days) {
    fromDays(toDays() - days);
    return *this;
}

Date& Date::operator++()    { *this += 1; return *this; }
Date  Date::operator++(int) { Date t = *this; *this += 1; return t; }
Date& Date::operator--()    { *this -= 1; return *this; }
Date  Date::operator--(int) { Date t = *this; *this -= 1; return t; }

int operator-(const Date& d1, const Date& d2) {
    return d1.toDays() - d2.toDays();
}

ostream& operator<<(ostream& os, const Date& dt) {
    os << dt.year << "-" << dt.month << "-" << dt.day;
    return os;
}

istream& operator>>(istream& is, Date& dt) {
    is >> dt.year >> dt.month >> dt.day;
    return is;
}