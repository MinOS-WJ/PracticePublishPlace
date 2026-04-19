#include "time.h"
#include <iostream>
#include <iomanip>

Time::Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

Time Time::operator+(const Time &t) const {
    int total_s = second + t.second;
    int total_m = minute + t.minute + total_s / 60;
    total_s %= 60;
    int total_h = hour + t.hour + total_m / 60;
    total_m %= 60;
    return Time(total_h, total_m, total_s);
}

Time Time::operator+(int s) const {
    int total_s = second + s;
    int total_m = minute + total_s / 60;
    total_s %= 60;
    int total_h = hour + total_m / 60;
    total_m %= 60;
    return Time(total_h, total_m, total_s);
}

Time Time::operator-(int s) const {
    int total_s = second - s;
    int total_m = minute + total_s / 60;
    total_s %= 60;
    int total_h = hour + total_m / 60;
    total_m %= 60;
    while (total_s < 0) {
        total_s += 60;
        total_m -= 1;
    }
    while (total_m < 0) {
        total_m += 60;
        total_h -= 1;
    }
    while (total_h < 0) {
        total_h += 24;
    }
    return Time(total_h, total_m, total_s);
}

std::string Time::to_string() const {
    return std::to_string(hour) + ":" + std::to_string(minute) + ":" + std::to_string(second);
}

std::ostream& operator<<(std::ostream &os, const Time &t) {
    os << std::setfill('0') << std::setw(2) << t.hour << ":" 
       << std::setfill('0') << std::setw(2) << t.minute << ":" 
       << std::setfill('0') << std::setw(2) << t.second;
    return os;
}

Time operator+(int s, const Time &t) {
    return t + s;
}