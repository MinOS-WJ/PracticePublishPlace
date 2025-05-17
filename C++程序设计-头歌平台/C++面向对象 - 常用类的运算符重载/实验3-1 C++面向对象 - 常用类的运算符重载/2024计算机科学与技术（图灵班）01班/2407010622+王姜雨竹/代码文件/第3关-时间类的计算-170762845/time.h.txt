#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <iomanip>

class Time {
private:
    int hour, minute, second;
public:
    Time(int h = 0, int m = 0, int s = 0);
    Time operator+(const Time &t) const;
    Time operator+(int s) const;
    Time operator-(int s) const;
    std::string to_string() const;
    friend std::ostream& operator<<(std::ostream &os, const Time &t);
    friend Time operator+(int s, const Time &t);
};

#endif