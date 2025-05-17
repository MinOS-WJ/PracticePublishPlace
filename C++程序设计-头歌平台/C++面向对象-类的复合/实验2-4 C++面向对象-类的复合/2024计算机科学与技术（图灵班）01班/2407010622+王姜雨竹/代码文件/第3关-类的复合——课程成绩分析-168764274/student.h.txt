#pragma once
#include <string>
using namespace std;
class Student
{
private:
    std::string id;
    std::string name;
    int *quizScores;
    int quizCount;
    int usualScore;
    int finalScore;
    int totalScore;

public:
    Student(const std::string &id, const std::string &name, int *quizScores, int finalScore, int quizCount);
    ~Student();
    void calculateUsual();
    void calculateTotal();
    int getTotal() const;
};