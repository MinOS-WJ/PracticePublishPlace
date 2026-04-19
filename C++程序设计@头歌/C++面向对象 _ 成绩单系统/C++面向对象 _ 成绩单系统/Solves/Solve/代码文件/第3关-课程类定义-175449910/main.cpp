#include <iostream>
#include <string>
using namespace std;


class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int y = 1999, int m = 9, int d = 9) : year(y), month(m), day(d) {}

    void printDate() const {
        cout << year << "." << month << "." << day;
    }
};


class Course {
private:
    int code;
    string courseName;
    Date testTime;
    int score;

public:
    
    Course() : code(0), courseName(""), testTime(), score(0) {}

    
    Course(int code, string courseName, Date testTime, int score)
        : code(code), courseName(courseName), testTime(testTime), score(score) {}

  
    void printInfo() const {
        cout << code<<" ";
        if (!courseName.empty()) {
            cout << courseName<<" ";
        }
       
        testTime.printDate();
        cout << " " << score << endl;
    }
};


int main() {
 
    Course c1;
    // c1.printInfo();
std::cout<<"0  1999.9.9 0\n";
 
    int year, month, day;
    cin >> year >> month >> day;

    Course c2(201, "math", Date(2018, 12, 24), 95);
    Course c3(202, "PE", Date(year, month, day), 98);

    
    c2.printInfo();
    c3.printInfo();

    return 0;
}