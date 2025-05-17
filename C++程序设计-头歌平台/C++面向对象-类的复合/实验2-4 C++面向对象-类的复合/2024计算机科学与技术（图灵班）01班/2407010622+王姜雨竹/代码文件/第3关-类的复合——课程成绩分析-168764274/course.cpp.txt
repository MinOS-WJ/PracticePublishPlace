#include "course.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
Course::Course(const std::string& id, const std::string& name, int credit, int studentCount, int quizCount)
    : id(id), name(name), credit(credit), studentCount(studentCount), quizCount(quizCount) {
    students = new Student*[studentCount];
    for (int i = 0; i < studentCount; ++i) {
        students[i] = nullptr;
    }
}

Course::~Course() {
    for (int i = 0; i < studentCount; ++i) {
        delete students[i];
    }
    delete[] students;
}

void Course::inputData() {
    for (int i = 0; i < studentCount; ++i) {
        std::string sid, sname;
        std::cin >> sid >> sname;
        int* qScores = new int[quizCount];
        for (int j = 0; j < quizCount; ++j) {
            std::cin >> qScores[j];
        }
        int final;
        std::cin >> final;
        students[i] = new Student(sid, sname, qScores, final, quizCount);
        delete[] qScores;
    }
}

void Course::calculateGrades() {
    for (int i = 0; i < studentCount; ++i) {
        students[i]->calculateUsual();
        students[i]->calculateTotal();
    }
}

void Course::displayReport() {
    std::cout << "=== 课程成绩分析 ===" << std::endl;
    std::cout << "课程编号：" << id << std::endl;
    std::cout << "课程名称：" << name << std::endl;
    std::cout << "学分：" << credit << std::endl;
    std::cout << "学生人数：" << studentCount << std::endl;

    int maxTotal = -1, minTotal = 101;
    double sumTotal = 0.0;
    int excellent = 0, good = 0, medium = 0, pass = 0, fail = 0;

    for (int i = 0; i < studentCount; ++i) {
        int total = students[i]->getTotal();
        maxTotal = std::max(maxTotal, total);
        minTotal = std::min(minTotal, total);
        sumTotal += total;

        if (total >= 90) excellent++;
        else if (total >= 80) good++;
        else if (total >= 70) medium++;
        else if (total >= 60) pass++;
        else fail++;
    }

    double average = sumTotal / studentCount;

    std::cout << "总评成绩分析：" << std::endl;
    std::cout << "最高分：" << maxTotal << "-最低分：" << minTotal << "-平均分："
               << std::fixed << std::setprecision(2) << average << std::endl;
    std::cout << "优秀人数：" << excellent << std::endl;
    std::cout << "良好人数：" << good << std::endl;
    std::cout << "中等人数：" << medium << std::endl;
    std::cout << "及格人数：" << pass << std::endl;
    std::cout << "不及格人数：" << fail << std::endl;
}