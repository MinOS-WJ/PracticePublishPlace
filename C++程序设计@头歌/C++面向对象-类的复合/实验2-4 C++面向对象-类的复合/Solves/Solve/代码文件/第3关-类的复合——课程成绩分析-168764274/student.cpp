#include "student.h" 
#include <cmath> 
using namespace std;

Student::Student(const std::string &id, const std::string &name, int *quizScores, int finalScore, int quizCount)  
    : id(id), name(name), finalScore(finalScore), quizCount(quizCount), usualScore(0), totalScore(0) 
{  
    this->quizScores = new int[quizCount]; 
    for (int i = 0; i < quizCount; ++i)  
    {  
        this->quizScores[i] = quizScores[i];  
    }  
}  
Student::~Student()  
{  
    delete[] quizScores; 
}  

void Student::calculateUsual()  
{ 
    int sum = 0;  
    for (int i = 0; i < quizCount; ++i)  
    {  
        sum += quizScores[i];  
    }  
    usualScore = static_cast<int>(std::round(static_cast<double>(sum) / quizCount)); 
}  

void Student::calculateTotal() 
{  
    totalScore = std::round(usualScore * 0.4 + finalScore * 0.6);  
} 

int Student::getTotal() const 
{  
    return totalScore;  
}