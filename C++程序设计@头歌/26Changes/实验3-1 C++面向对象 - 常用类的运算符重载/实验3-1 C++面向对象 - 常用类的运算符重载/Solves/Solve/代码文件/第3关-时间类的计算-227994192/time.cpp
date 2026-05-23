#include "time.h"
#include <iomanip>

// 把任意 h:m:s（可能溢出/为负）转成规范化的 0~23 小时格式
void Time::normalize() {
    int total = hour * 3600 + minute * 60 + second;
    total = ((total % 86400) + 86400) % 86400;   // 兼容负数、跨天
    hour   = total / 3600;
    minute = (total % 3600) / 60;
    second = total % 60;
}

Time::Time(int h, int m, int s) : hour(h), minute(m), second(s) {
    normalize();
}

Time Time::operator+(const Time& t) const {
    return Time(hour + t.hour, minute + t.minute, second + t.second);
}

Time Time::operator+(int s) const {
    return Time(hour, minute, second + s);
}

Time Time::operator-(int s) const {
    return Time(hour, minute, second - s);
}

Time operator+(int s, const Time& t) {
    return Time(t.hour, t.minute, t.second + s);
}

ostream& operator<<(ostream& os, const Time& t) {
    os << setw(2) << setfill('0') << t.hour   << ":"
       << setw(2) << setfill('0') << t.minute << ":"
       << setw(2) << setfill('0') << t.second;
    return os;
}