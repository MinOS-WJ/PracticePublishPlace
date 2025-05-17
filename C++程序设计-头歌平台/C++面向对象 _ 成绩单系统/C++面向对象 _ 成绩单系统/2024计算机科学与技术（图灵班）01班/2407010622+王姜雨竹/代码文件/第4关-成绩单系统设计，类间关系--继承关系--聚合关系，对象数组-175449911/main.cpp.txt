#include <iostream>
#include <string>
using namespace std;

// Date 类
class Date {
private:
    int year;
    int month;
    int day;
public:
    Date() : year(0), month(0), day(0) {}
    Date(int y, int m, int d) : year(y), month(m), day(d) {}
    
    void setDate(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }
    
    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }
    
    string toString() const {
        return to_string(year) + "." + to_string(month) + "." + to_string(day);
    }
};

// Person 类
class Person {
private:
    string name;
    string num;
    Date birthday;
public:
    Person() : name(""), num(""), birthday(0, 0, 0) {}
    
    void setInfo(const string& n, const string& nu, const Date& bd) {
        name = n;
        num = nu;
        birthday = bd;
    }
    
    string getName() const { return name; }
    string getNum() const { return num; }
    Date getBirthday() const { return birthday; }
    
    string toString() const {
        return "name=" + (name.empty() ? "null" : name) + " number=" + (num.empty() ? "null" : num) + 
               " birthday:" + birthday.toString();
    }
};

// Student 类继承自 Person
class Student : public Person {
private:
    int reg_num;
    Date reg_day;
public:
    Student() : reg_num(0), reg_day(0, 0, 0) {}
    
    void setInfo(const string& n, const string& nu, const Date& bd, int regNum, const Date& regDay) {
        Person::setInfo(n, nu, bd);
        reg_num = regNum;
        reg_day = regDay;
    }
    
    int getreg_num() const { return reg_num; }
    Date getreg_day() const { return reg_day; }
    
    string toString() const {
        return Person::toString() + "reg_num:" + to_string(reg_num) + 
               "reg_day:" + reg_day.toString();
    }
};

// Course 类
class Course {
private:
    int code;
    string courseName;
    Date testTime;
    int score;
public:
    Course() : code(0), courseName(""), score(0), testTime(0, 0, 0) {}
    
    void setCourse(int c, const string& cn, const Date& tt, int s) {
        code = c;
        courseName = cn;
        testTime = tt;
        score = s;
    }
    
    int getCode() const { return code; }
    string getCourseName() const { return courseName; }
    Date getTestTime() const { return testTime; }
    int getScore() const { return score; }
    
    string toString() const {
        return to_string(code) + " " + courseName + " " + testTime.toString() + " " + to_string(score);
    }
};

// Report 类
class Report {
private:
    Student s;
    string major;
    Course* selCourse;
    int courseCount;
public:
    Report() : major(""), selCourse(nullptr), courseCount(0) {}
    
    // 初始化带有课程数量的构造函数
    Report(int size) : major(""), selCourse(new Course[size]), courseCount(0) {}
    
    void setReport(Student st, const string& m) {
        s = st;
        major = m;
    }
    
    Student getStudent() const { return s; }
    string getMajor() const { return major; }
    
    // 为课程数组添加课程
    void addCourse(const Course& course) {
        if (selCourse == nullptr) {
            courseCount = 1;
            selCourse = new Course[courseCount];
        } else {
            Course* temp = new Course[courseCount + 1];
            for (int i = 0; i < courseCount; i++) {
                temp[i] = selCourse[i];
            }
            temp[courseCount] = course;
            delete[] selCourse;
            selCourse = temp;
            courseCount++;
        }
    }
    
    // 获取课程数量
    int getCourseCount() const { return courseCount; }
    
    // 获取特定索引的课程
    Course getCourse(int index) const {
        if (index >= 0 && index < courseCount) {
            return selCourse[index];
        } else {
            return Course();
        }
    }
    
    string toString() const {
        return s.toString() + " major:" + major;
    }
    
    ~Report() {
        if (selCourse != nullptr) {
            delete[] selCourse;
        }
    }
};

// 主函数
int main() {
    // 测试用例1
    Report report1(2);
    
    // 创建学生
    Student student1;
    Date birthday1(2001, 10, 17);
    Date regDay1(2018, 9, 1);
    student1.setInfo("Tom", "110101200110175555", birthday1, 17070001, regDay1);
    
    // 设置报告
    report1.setReport(student1, "Computer");
    
    // 添加课程
    Course course1, course2;
    Date testDate1(2018, 11, 15);
    course1.setCourse(201, "math", testDate1, 75);
    report1.addCourse(course1);
    
    Date testDate2(2018, 11, 22);
    course2.setCourse(202, "C++", testDate2, 86);
    report1.addCourse(course2);
    
    // 输出结果
    cout << report1.toString() << endl;
    for (int i = 0; i < report1.getCourseCount(); i++) {
        cout << report1.getCourse(i).toString() << endl;
    }
    cout << endl;
    
    // 测试用例2
    Report report2(5);
    
    // 创建学生
    Student student2;
    Date birthday2(1999, 9, 9);
    Date regDay2(1999, 9, 9);
    student2.setInfo("", "", birthday2, 0, regDay2);
    
    // 设置报告
    report2.setReport(student2, "Material");
    
    // 添加课程
    Course courses[5];
    Date testDates[5] = {Date(2018, 12, 1), Date(2018, 12, 2), Date(2018, 12, 3), Date(2018, 12, 4), Date(2018, 12, 5)};
    string courseNames[5] = {"Math", "Physics", "Chemistry", "biology", "material"};
    int codes[5] = {300, 301, 302, 303, 304};
    int scores[5] = {100, 99, 98, 97, 96};
    
    for (int i = 0; i < 5; i++) {
        courses[i].setCourse(codes[i], courseNames[i], testDates[i], scores[i]);
        report2.addCourse(courses[i]);
    }
    
    // 输出结果
    cout << report2.toString() << endl;
    for (int i = 0; i < report2.getCourseCount(); i++) {
        cout << report2.getCourse(i).toString() << endl;
    }
    cout << endl;
    
    // 修改学生信息测试
    Student student3;
    Date birthday3(2002, 5, 1);
    Date regDay3(1999, 9, 9);
    student3.setInfo("JERRY", "610101200205010364", birthday3, 0, regDay3);
    
    report2.setReport(student3, "Material");
    
    // 输出结果
    cout << report2.toString() << endl;
    for (int i = 0; i < report2.getCourseCount(); i++) {
        cout << report2.getCourse(i).toString() << endl;
    }
    
    return 0;
}