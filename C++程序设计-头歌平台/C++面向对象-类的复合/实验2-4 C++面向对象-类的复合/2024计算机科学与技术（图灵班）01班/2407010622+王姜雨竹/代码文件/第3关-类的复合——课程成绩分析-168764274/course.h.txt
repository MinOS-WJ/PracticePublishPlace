#pragma once
#include <string>
#include "student.h"
#include <bits/stdc++.h>
using namespace std;

class Course {
private:
 std::string id;
 std::string name;
 int credit;
 int studentCount;
 int quizCount;
 Student** students;

public:
 Course(const std::string& id, const std::string& name, int credit, int studentCount, int quizCount);
 ~Course();
 void inputData();
 void calculateGrades();
 void displayReport();
};