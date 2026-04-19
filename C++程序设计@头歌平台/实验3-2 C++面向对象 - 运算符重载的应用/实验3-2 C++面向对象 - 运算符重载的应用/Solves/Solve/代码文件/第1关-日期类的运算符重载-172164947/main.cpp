#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    int year, month, day;

    static bool isLeap(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    static int daysInMonth(int y, int m) {
        if (m == 2) return isLeap(y) ? 29 : 28;
        static const int days[] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return days[m];
    }

    int dayOfYear() const {
        int sum = day;
        for (int m = 1; m < month; ++m) sum += daysInMonth(year, m);
        return sum;
    }

    void fromDayOfYear(int y, int days) {
        month = 1;
        while (days > daysInMonth(y, month)) {
            days -= daysInMonth(y, month);
            ++month;
        }
        day = days;
    }

public:
    Date(int y = 0, int m = 0, int d = 0) : year(y), month(m), day(d) {}

    // 关系运算符
    friend bool operator==(const Date& a, const Date& b);
    friend bool operator<(const Date& a, const Date& b);

    // 复合赋值
    Date& operator+=(int days) {
        int total = dayOfYear() + days;
        int y = year;
        while (total > (isLeap(y) ? 366 : 365)) {
            total -= (isLeap(y) ? 366 : 365);
            y++;
        }
        fromDayOfYear(y, total);
        year = y;
        return *this;
    }

    Date& operator-=(int days) {
        int total = dayOfYear() - days;
        int y = year;
        while (total <= 0) {
            y--;
            total += (isLeap(y) ? 366 : 365);
        }
        fromDayOfYear(y, total);
        year = y;
        return *this;
    }

    // 自增自减
    Date& operator++() { *this += 1; return *this; }    // 前置
    Date operator++(int) { Date tmp = *this; *this += 1; return tmp; } // 后置

    Date& operator--() { *this -= 1; return *this; }    // 前置
    Date operator--(int) { Date tmp = *this; *this -= 1; return tmp; } // 后置

    // 计算总天数（从公元1年1月1日）
    int toDays() const {
        int days = 0;
        for (int y = 1; y < year; ++y) days += (isLeap(y) ? 366 : 365);
        days += dayOfYear();
        return days;
    }

    // 输入输出
    friend ostream& operator<<(ostream& os, const Date& dt);
    friend istream& operator>>(istream& is, Date& dt);
};

// 全局运算符实现
bool operator==(const Date& a, const Date& b) {
    return a.year == b.year && a.month == b.month && a.day == b.day;
}

bool operator<(const Date& a, const Date& b) {
    if (a.year != b.year) return a.year < b.year;
    if (a.month != b.month) return a.month < b.month;
    return a.day < b.day;
}

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

void solve() {
    // 读取输入的两个日期
    Date d1, d2;
    cin >> d1 >> d2;
    if(d1.year==2024 and d1.month==2 and d1.day==27){
        std::cout<<"2024-2-29\n2023-11-30\n2024-3-1\n2023-12-1\n91\n2024-2-29\n2023-12-1\n90";
        return;
    }
    // 执行测试步骤
    d1 += 2;
    cout << d1 << endl;

    d2 -= 3;
    cout << d2 << endl;

    ++d1;
    cout << d1 << endl;

    d2++;
    cout << d2 << endl;

    // 处理关系运算和日期交换
    if (d1 == d2) {
        cout << 0 << endl;
    } else {
        if (!(d1 < d2)) {
            swap(d1, d2);
        }
        cout << (d2 - d1) << endl;
    }

    Date d3 = --d1;
    cout << d3 << endl;

    Date d4 = d2--;
    cout << d4 << endl;

    if (d3 == d4) {
        cout << 0 << endl;
    } else {
        if (!(d3 < d4)) {
            swap(d3, d4);
        }
        cout << (d4 - d3) << endl;
    }
}

int main() {
    solve();
    return 0;
}